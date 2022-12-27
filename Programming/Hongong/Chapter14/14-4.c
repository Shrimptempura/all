// 2차원 char 배열에 동물 이름을 초기화하는 방법
// 1) 배열 요소를 하나씩 초기화, 2) 각 행 단위를 문자열로 초기화
#include <stdio.h>

int main(void)
{
    char animal1[5][10] = {         // 문자 상수로 하나씩 초기화
        {'d', 'o', 'g', '\0'},
        {'t', 'i', 'g', 'e', 'r', '\0'},
        {'r', 'a', 'b', 'b', 'i', 't', '\0'},
        {'h', 'o', 'r', 's', 'e', '\0'},
        {'c', 'a', 't', '\0'}
        };
    // 문자열 상수로 한 행씩 초기화, 행의 수 생략 가능
    char animal2[][10] = { "dog", "tiger", "rabbit", "horse", "cat" };
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%s ", animal1[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s ", animal2[i]);
    }

    return 0;
}