// 대문자는 소문자로, 소문자는 대문자로 변환되는것..
#include <stdio.h>
#include <string.h>

int main(void) 
{ 
    char s[100]; 
    int i;

    printf("문자열을 입력하시오: "); 
    scanf("%s", s);

    for (i = 0; i < strlen(s); i++) 
        s[i] = s[i] ^ 0x20;
    printf("결과 문자열: %s\n", s); 

    return 0; 
}