// 포커게임에 사용되는 카드를 구조체 card로 정의하고 52개의 카드를 구조체의 배열로 나타내라
// 52개의 카드를 적절한 값으로 초기화하고, 값들을 출력하는 프로그램을 작성해라.
// card는 카드의 수는 정수로 표현되며, 멤버의 이름은 value이다. value는 1부터 13까지의
// 값을 가질수 있다. 카드의 타입은 하나의 문자로 표현되며 멤버의 이름은 suit이다.
// suit는 'c', 'd', 'h', 's'의 값을 가질 수 있다.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 52

typedef struct {
    int value;
    char suit;
} CARD;

void initial_card(CARD cardData[], char shape[]);
void print_card(CARD cardData[], int size);
void shuffle_card(CARD cardData[], int size);

int main(void)
{
    CARD cardData[SIZE];
    char shape[] = {'c', 'd', 'h', 's'};
    srand((unsigned)time(NULL));

    initial_card(cardData, shape);

    printf("<초기화된 카드>\n");
    print_card(cardData, SIZE);
    printf("\n");

    shuffle_card(cardData, SIZE);

    printf("<셔플을 한 카드>\n");
    print_card(cardData, SIZE);
    printf("\n");

    return 0;
}

void initial_card(CARD cardData[], char shape[])
{
    int i, j, count = 0;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 13; j++)
        {
            cardData[count].value = j + 1;
            cardData[count].suit = shape[i];
            count++;
        }
}

void print_card(CARD cardData[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%3d%c ", cardData[i].value, cardData[i].suit);
        if ((i + 1) % 13 == 0 )
            printf("\n");
    }
}

void shuffle_card(CARD cardData[], int size)
{
    CARD temp;
    int i, j;

    for (i = 0; i < 52; i++)
    {
        j = rand() % 52;
        temp.value = cardData[i].value;
        cardData[i].value = cardData[j].value;
        cardData[j].value = temp.value;
    }
}