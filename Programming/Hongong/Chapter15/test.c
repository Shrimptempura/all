// 두 명의 나이와 키를 입력한 후에 바꾸어 출력하니다. 단 나이와 키를 바꾸는 함수는
// int형과 double형을 모두 교환할 수 있도록 하나의 함수로 구현하세요. swap 함수 호출예제 참고
#include <stdio.h>
#include <string.h>

void swap(char *str, void *a, void *b);

int main(void)
{
    int age1, age2;
    double key1, key2;

    printf("첫 번째 사람의 나이와 키 입력 : \n");
    scanf("%d %lf", &age1, &key1);
    printf("두 번째 사람의 나이와 키 입력 : \n");
    scanf("%d %lf", &age2, &key2);
    swap("int", &age1, &age2);
    swap("double", &key1, &key2);

    printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", age1, key1);
    printf("두 번째 사람의 나이와 키 : %d, %.1lf\n", age2, key2);
    
    return 0;
}

void swap(char *str, void *a, void *b)
{
    int temp;
    double temp1;

    if (str == "int")
    {
        temp = *(int *)a;
        *(int *)a = *(int *)b;
        *(int *)b = temp;
    }
    else if (str == "double")
    {
        temp1 = *(double *)a;
        *(double *)a = *(double *)b;
        *(double *)b = temp1;
    }
}