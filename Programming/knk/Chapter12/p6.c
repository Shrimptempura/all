//퀵정렬 알고리즘 포인터로 나타내기 
#include <stdio.h>
#define N 10

void quicksort(int ary[], int *left, int *right);
int *split(int ary[], int *left, int *right);

int main(void) 
{
    int ary[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &ary[i]);
    quicksort(ary, ary, ary + N - 1);

    printf("In sorted order: ");
    for (i = 0; i < N; i++)
        printf("%d ", ary[i]);
    printf("\n");

    return 0;
}

void quicksort(int ary[], int *left, int *right) 
{
    int *middle;

    if (left >= right) return;

    middle = split(ary, left, right);
    quicksort(ary, left, middle - 1);
    quicksort(ary, middle + 1, right);
}

int *split(int ary[], int *left, int *right) 
{
    int part_element = *left;

    for (;;) 
    {
        while (left < right && part_element <= *right)
            right--;
        if (left >= right) break;
        *left++ = *right;

        while (left < right && *left <= part_element)
            left++;
        if (left >= right) break;
        *right-- = *left;
    }
    *right = part_element;
    return right;
}