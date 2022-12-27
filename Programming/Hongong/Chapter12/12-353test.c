#include <stdio.h>
#include<string.h>

int main(void)
{
    char str[80]; //입력한 단어
    char res_str[80]; //생략한 단어
    char *dp;
    int i;
    int len;

    printf("단어 입력 : ");
    scanf("%s",str); 
    len = strlen(str); //입력한 단어의 길이
    strcpy(res_str,str); //생략한 단어 연산 위해 복사
    dp = res_str;

    if(len > 5)   
    {
    for(i = 0; i < 5; i++)    
        {
            dp++; //5번째 문자 자리까지 이동
        }
    *dp = '\0';
    strncat(dp,"*************",len-5);
    }
printf("입력한 단어 : %s , 생략한 단어 : %s\n",str,res_str);

return 0;
}