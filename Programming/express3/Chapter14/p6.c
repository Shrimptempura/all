// 문자열을 가리키고 있는 포인터의 배열을 인수로 받아서 문자열을 알파벳 순으로 정렬
// 시키는 함수 sort_strings()를 작성하고 테스트해보자.
#include <stdio.h>
#include <string.h>

void sort_things(char *s[], int size);

int main(void)
{
    char *s[] = {"mycopy", "src", "dst", "fadfaf", "aaaa1", "123d"};
    int i;

    sort_things(s, 6);

    for (i = 0; i < 6; i++)
        printf("%s\n", s[i]);

    return 0;
}

void sort_things(char *s[], int size)
{
    int i, j, least;
    char *temp;

    for (i = 0; i < size - 1; i++)
    {
        least = i;      // i번째 값을 최소값으로 가정
        for (j = i + 1; j < size; j++)      // 최소값 탐색
            if (strcmp(s[j], s[least]) < 0)     // 음수 = s1이 s2보다 앞에 있다.
                least = j;
        // i번째 요소와 least 위치의 요소 교환
        temp = s[i];
        s[i] = s[least];
        s[least] = temp;
    }
}