// 직원들의 월급이 저장된 배열에서 월급이 200만 원인 사람을 찾고 싶다. 주어진 값을
// 배열 A[]에서 탐색하여 배열 요소의 인덱스를 반환하는 함수를 작성 및 테스트
#include <stdio.h>

int search(int *A, int size, int serch_value);

int main(void)
{
    int m_pay[10] = {1, 2, 200, 4, 5, 100, 7, 8, 9};
    int search_idx;

    search_idx = search(m_pay, 10, 200);

    if (search_idx == -1)
        printf("월급이 200만원인 사람을 찾을수가 없다.\n");
    else
        printf("월급이 200만원인 사람의 인덱스 = %d\n", search_idx);

    return 0;
}

int search(int *A, int size, int search_value)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (A[i] == search_value)
            return i;
    }
    return -1;
}