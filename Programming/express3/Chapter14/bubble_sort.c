#include <stdio.h>

void bubble_sort(int arr[], int count)    // 매개변수로 정렬할 배열과 요소의 개수를 받음
{
    int temp;

    for (int i = 0; i < count; i++)    // 요소의 개수만큼 반복
    {
        for (int j = 0; j < count - 1; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (arr[j] > arr[j + 1])          // 현재 요소의 값과 다음 요소의 값을 비교하여
            {                                 // 큰 값을
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;            // 다음 요소로 보냄
            }
        }
    }
}

int main(void)
{
    int numArr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };   // 정렬되지 않은 배열

    bubble_sort(numArr, sizeof(numArr) / sizeof(int));    // 거품 정렬 함수 호출

    for (int i = 0; i < 10; i++)
        printf("%d ", numArr[i]);    // 1 2 3 4 5 6 7 8 9 10

    printf("\n");

    return 0;
}
// 여기서 설명한 거품 정렬은 이해를 돕기 위해 최적화를 하지 않고 간단하게 구현했습니다. 
// 좀 더 효율적으로 정렬하려면 이미 정렬된 맨 마지막 원소는 건너뛰어도 됩니다. 
// 여러분들이 한 번 최적화해서 구현해보기 바랍니다.

// 거품 정렬은 요소 개수 * 요소 개수(n2)로 비교하기 때문에 효율이 좋지 않습니다. 

// 정렬 알고리즘은 여러 개가 있는데 그 중에서 퀵 정렬이 효율이 좋아서 널리 쓰이며 
// C 언어 표준 함수에도 포함되어 있습니다.