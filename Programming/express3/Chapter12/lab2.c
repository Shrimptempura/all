// 하나의 문자열에 저장된 문자들을 다른 문자 배열로 복사하는 기초;
// 라이브러리 함수로도 가능하지만, 여기서는 수작업 예시
// 또한 lib로 strlen도 있지만 문자열 길이 구하는 수작업 예시
#include <stdio.h>

int main(void)
{
    char src[] = "The worst things to eat before you sleep";
    char dst[100];
    int i, j;

    printf("원본 문자열 = %s\n", src);
    for (i = 0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }


    dst[i] = '\0';      // 마지막의 NULL;
    while(dst[j] != '\0')
    {
        j++;
    }
    printf("복사된 문자열 = %s\n", dst);
    printf("문자열 길이 = %d\n", j);

    return 0;
}