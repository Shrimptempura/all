// 배열 원소의 값을 모두 지정된 값으로 초기화하는 ARRaY_INIT(array, size, value)를 작성하여 테스트 해보자
#include <stdio.h>
#define ARRAY_INIT(array, size, value) {int i; for (i = 0; i < size; i++)\
array[i] = (value);}
int main(void)
{
    int a[10];
    ARRAY_INIT(a, 10, 0);

    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    
    return 0;
}