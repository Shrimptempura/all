// 포인터 없이 순수 문자열로 푼 문제..
#include <stdio.h>

#define MAX_WORDS 30
#define MAX_LEN 20

int main(void) {

    int i = 0, j = 0;
    char ch;
    char terminating_char = 0;
    char sentence[MAX_WORDS][MAX_LEN + 1];

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && i < MAX_WORDS) {
        if (ch == ' ' || ch == '\t') {
            sentence[i][j] = '\0';
            i++;
            j = 0;
            continue;   // 중요, continue가 없으면 ch가 sp일시 다음 반복문이 아닌
                        // elif 절에서 새로운 행 0번째에 또 sp가 저장됨
                        // 오류 : 1행 null, sp, sp 2행 null, sp 3행 null....
        }
        if (ch == '.' || ch == '!' || ch == '?') {
            terminating_char = ch;
            sentence[i][j] = '\0';
            break;
        }
        else if (j < MAX_LEN)
            sentence[i][j++] = ch;
    }

    printf("Reversal of sentence: ");
    while (i > 0)
        printf("%s ", sentence[i--]);
    printf("%s%c\n", sentence[i], terminating_char);
    // printf("\b%c\n" ....)  34행 "%s " sp을 \b (백슬래쉬 한칸)으로 대체 가능
    return 0;
}