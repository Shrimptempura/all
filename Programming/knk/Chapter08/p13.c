#include <stdio.h>
// copy p13-1.c 참고

int main(void)
{
    char first[20];
    char last[20];
    int i, j;

    printf("Enter a first and last name : ");
    // scanf는 1, 12, 123이든 한 단어로 보긴함. 문자열(단어 공백 단어)가 안됨
    scanf("%s", first);
    scanf("%s", last);

    printf("You entered the name : %s, %c.\n", last, first[0]);

    return 0;
}