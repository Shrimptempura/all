// 동적 배열의 크기를 증가시키는 전형적인 코드, 아래 코드는 2개의 정수를 저장하는
// 동적 메모리를 할당을 받는다. 이 공간을 정수 3개를 저장할 수 있는 공간으로 확장한다.
// 기존의 데이터들을 보존되기 때문에 따로 복사할 필요는 없다.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("정수 2개를 저장할 공간이 필요\n");
    int *list = (int *)malloc(sizeof(int) * 2);
    int i;
    int *list_new;

    if (list == NULL)
    {
        printf("동적 메모리 확장 오류\n");
        exit(EXIT_FAILURE);
    }

    list[0] = 10;
    list[1] = 20;

    printf("정수 3개를 저장할 공간으로 확장\n");
    list_new = (int *)realloc(list, sizeof(int) * 3);
    if (list_new == NULL)
    {
        printf("동적 메모리 확장 오류\n");
        exit(EXIT_FAILURE);
    }

    list_new[2] = 30;

    for (i = 0; i < 3; i++)
        printf("%d ", list_new[i]);
    printf("\n");

    free(list_new);

    return 0;
}