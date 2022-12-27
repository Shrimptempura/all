// 배열의 요소의 개수가 다른 배열도 출력하는 함수; 크기가 다른 배열을 출력하는 함수
#include <stdio.h>

void print_ary(int *pa, int size);      // 함수 선언, 매개변수 2개

int main(void)
{
    int ary1[5] = {10, 20, 30, 40, 50};         // 배열 요소 개수 5개인 배열
    int ary2[7] = {10, 20, 30, 40, 50, 60, 70}; // 요소의 개수가 7개인 배열

    print_ary(ary1, 5);     // ary1 배열 출력, 배열 요소의 개수 전달
    printf("\n");
    print_ary(ary2, 7);     // ary2 배열 출력, 배열 요소의 개수 전달
    // print_ary(ary2, sizeof(ary2) / sizeof(ary2[0])); 배열의 요소 개수 ㅋㅋ
    return 0;
}

void print_ary(int *pa, int size)
{
    int i;

    for (i = 0; i < size; i++) // 그 전에는 size값이 고정이라 같은 크기 배열만 가능했다.
    {
        printf("%d ", pa[i]);
    }
}