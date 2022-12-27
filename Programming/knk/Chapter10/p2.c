// poker.c 예제
// 전역변수 num_in_rank, num_in_suit를 main에 넣어서 수정
#include <stdbool.h>    /* C99 라이브러리 */
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS (13)      // 숫자
#define NUM_SUITS (4)       // 무늬
#define NUM_CARDS (5)       // ?

/* 외부 변수 */
bool g_is_straight = false;
bool g_is_flush = false;
bool g_is_four = false;
bool g_is_three = false;
int g_pairs = 0;  /* 하이 카드면 0, 원페어면 1, 투페어면 2 */

/* 원형 */
void read_cards(int num_in_rank[NUM_RANKS], int num_in_suit[NUM_SUITS]);
void analyze_hand(int num_in_rank[NUM_RANKS], int num_in_suit[NUM_SUITS]);
void print_result(void);

/**********************************************************
 * main: read_cards, analyze_hand와 print_result를         *
 *       반복적으로 호출해준다.                            *
 **********************************************************/
int main(void)
{
    int num_in_rank[NUM_RANKS];
    int num_in_suit[NUM_SUITS];

    for (;;) {
        read_cards(num_in_rank, num_in_suit);
        analyze_hand(num_in_rank, num_in_suit);
        print_result();
    }
}

/**********************************************************
 * read_cards: 카드를 입력받아 외부변수에 저장해준다; 유효하지      *
 *             않거나 중복된 카드가 있는지 확인해준다.            *
 **********************************************************/
void read_cards(int num_in_rank[NUM_RANKS], int num_in_suit[NUM_SUITS])
{   // does_card_exists[13][4];
    bool does_card_exists[NUM_RANKS][NUM_SUITS];
    char ch = '\0';
    char rank_ch = '\0';
    char suit_ch = '\0';
    int rank = 0;
    int suit = 0;
    bool is_bad_card = false;
    int cards_read = 0;

    // 52-62 싹다 0 초기화
    for (rank = 0; rank < NUM_RANKS; ++rank) {      // 0 ~ 13
        num_in_rank[rank] = 0;
        for (suit = 0; suit < NUM_SUITS; ++suit) {  // 0 ~ 4
            does_card_exists[rank][suit] = false;
        }
    }

    for (suit = 0; suit < NUM_SUITS; ++suit) {
        num_in_suit[suit] = 0;
    }

    while (cards_read < NUM_CARDS) {
        is_bad_card = false;

        printf("카드를 입력해주세요: ");

        rank_ch = getchar();
        switch (rank_ch) {
        case '0': exit(EXIT_SUCCESS);
        case '2': rank = 0; break;
        case '3': rank = 1; break;
        case '4': rank = 2; break;
        case '5': rank = 3; break;
        case '6': rank = 4; break;
        case '7': rank = 5; break;
        case '8': rank = 6; break;
        case '9': rank = 7; break;
        case 't': /* intentional fallthrough */
        case 'T': rank = 8; break;
        case 'j': /* intentional fallthrough */
        case 'J': rank = 9; break;
        case 'q': /* intentional fallthrough */
        case 'Q': rank = 10; break;
        case 'k': /* intentional fallthrough */
        case 'K': rank = 11; break;
        case 'a': /* intentional fallthrough */
        case 'A': rank = 12; break;
        default: is_bad_card = true; break;
        }

        suit_ch = getchar();
        switch (suit_ch) {
        case 'c': /* intentional fallthrough */
        case 'C': suit = 0; break;
        case 'd': /* intentional fallthrough */
        case 'D': suit = 1; break;
        case 'h': /* intentional fallthrough */
        case 'H': suit = 2; break;
        case 's': /* intentional fallthrough */
        case 'S': suit = 3; break;
        default: is_bad_card = true; break;
        }
        
        // ex) 2s 입력시 '2', 's'는 걸리고, s다음에 공백여부 즉(2글자 확인? 인가요?)
        // ㄴㄴ; -> 2s(sp)(sp) 입력시, 2s 받는 것
        while ((ch = getchar()) != '\n') {
            if (ch != ' ') {
                is_bad_card = true;
            }
        }

        if (is_bad_card) {
            printf("유효하지 않은 카드입니다; 다시 입력해주세요.\n");
        } else if (does_card_exists[rank][suit]) {
            printf("이미 존재하는 카드입니다; 다시 입력해주세요.\n");
            // 첫번째때는 else에서 does_card_exists가 true;
        } else {
            ++num_in_rank[rank];
            ++num_in_suit[suit];
            does_card_exists[rank][suit] = true;
            ++cards_read;
        }
    }
}

/**********************************************************
 * analyze_hand: 패가 스트레이트인지, 플러시인지, 포카드인지,      *
 *               쓰리카인드인지를 판별해주고; 페어의 개수를 판별해  *
 *               그 값을 외부변수에 저장해준다.                 *
 **********************************************************/
void analyze_hand(int num_in_rank[NUM_RANKS], int num_in_suit[NUM_SUITS])
{
    int num_consec = 0;
    int rank = 0;
    int suit = 0;
    g_is_straight = false;
    g_is_flush = false;
    g_is_four = false;
    g_is_three = false;
    g_pairs = 0;

    /* 플러시인지 확인 */
    for (suit = 0; suit < NUM_SUITS; ++suit) {
        // 같은 문양 5개면, 0 초기화 값에서 문양 나올시 각 문양 인덱스 + 1,
        // 즉 플러시면 값이 5가 됨
        if (num_in_suit[suit] == NUM_CARDS) {
            g_is_flush = true;
        }
    }

    /* 스트레이트인지 확인 */
    rank = 0;
    while (num_in_rank[rank] == 0) {
        ++rank;
    }
    
    // 중간에 조건이 틀리면 for문 깨짐, 즉 연속성 아니면 num_consec은 5가 안나옴;
    for (; rank < NUM_RANKS && num_in_rank[rank] > 0; ++rank) {
        ++num_consec;
    }

    if (num_consec == NUM_CARDS) {
        g_is_straight = true;
        return;
    }

    /* 포카드/쓰리카드 여부와 페어의 개수를 확인*/
    for (rank = 0; rank < NUM_RANKS; ++rank) {
        if (num_in_rank[rank] == 4) {
            g_is_four = true;
        }

        if (num_in_rank[rank] == 3) {
            g_is_three = true;
        }

        if (num_in_rank[rank] == 2) {
            ++g_pairs;
        }
    }
}

/**********************************************************
 * print_result: 사용자에게 analyze_hand를 통해 구한 외부변수를  *
 *               통해 결과값을 출력해준다.                     *
 **********************************************************/
void print_result(void)
{
    if (g_is_straight && g_is_flush) {
        printf("스트레이트 플러시");
    } else if (g_is_four) {
        printf("포카드");
    } else if (g_is_three && g_pairs == 1) {
        printf("풀하우스");
    } else if (g_is_flush) {
        printf("플러시");
    } else if (g_is_straight) {
        printf("스트레이트");
    } else if (g_is_three) {
        printf("쓰리카드");
    } else if (g_pairs == 2) {
        printf("투페어");
    } else if (g_pairs == 1) {
        printf("원페어");
    } else {
        printf("하이카드");
    }

    printf("\n\n");
}