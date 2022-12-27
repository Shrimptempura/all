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

    if (strcmp(str, "int") == 0)
    {
        temp = *(int *)a;
        *(int *)a = *(int *)b;
        *(int *)b = temp;
    }
    else if (strcmp(str, "double") == 0)
    {
        temp1 = *(double *)a;
        *(double *)a = *(double *)b;
        *(double *)b = temp1;
    }
}
/*      void swap(char ps, void *a, void *b)
31행을 if (str == "int"); strcmp안쓰고 해도 돌아는 가는데.. 쓰면안된다!
swap 함수가 호출될 때 첫번째 매개변수로 "int"와 같은 문자열을 주면 그 주소를 매개변수 
포인터 ps가 받을 것이고 if(ps == "int") 이 부분에서 ps값이 문자열 "int"의 주소와 같아 코드가 
잘 작동할 수 있습니다. ps값이 문자열 "int"와 같진 않지만 코드에서 문자열은 실제 문자열이 
저장된 메모리의 시작 주소값으로 바뀌므로 ps와 문자열 "int"가 같다고 할 수 있습니다. 다만 이렇게 
하면 안되는 이유가... 컴파일러가 코드에 있는 같은 문자열은 하나의 데이터만 유지하고 같은 문자열을 
사용한 곳에 모두 그 주소를 사용하도록 하는 경우만 제대로 결과가 나옵니다. 컴파일러가 같은 
문자열이라도 여러번 사용하는 경우 따로 따로 별도의 데이터로 처리한다면 당연히 메모리의 주소가 
달라지므로 옳은 결과가 나오지 않습니다. C언어는 잘못 작성한 코드가 우연히도 옳은 결과가 되는 
경우가 종종 있습니다. 특히 포인터에서 그런 경우가 있어서 포인터는 완벽히 알지 못하면 전혀 
모르는 것보다 못할 수 있습니다
*/