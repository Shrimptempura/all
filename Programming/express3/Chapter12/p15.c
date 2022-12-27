// 연산의 이름을 문자열로 받아서 해당 연산을 실행하는 프로그램,
#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[10];
    int x, y, result;

    printf("연산을 입력하시오 : ");
    // fgets(string, sizeof(string), stdin);
    // string[strlen(string) - 1] = NULL;
    scanf("%s %d %d", string, &x, &y);

    if (strcmp(string, "add") == 0)
        result = x + y;
    else if (strcmp(string, "sub") == 0)
        result = x - y;
    else if (strcmp(string, "mul") == 0)
        result = x * y;
    else if (strcmp(string, "div") == 0)
        result = x / y;
    
    printf("연산의 결과 %d\n", result);

    return 0;
}