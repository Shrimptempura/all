// 비트 연산자를 이용하여 대소문자를 변경하자. 대문자의 아스키코드는 모두
// 여섯 번째 비트가 0이고, 소문자의 경우는 여섯 번째 비트가 모두 1이다.
// XOR 연산을 이용하여 문자의 여섯 번째 비트를 바꿔주면 대소문자가 바뀌게 된다.
// 이 성질을 이용하여 사용자가 입력한 문자열의 대소문자를 바꾸는 프로그램 작성
#include <stdio.h>
#define SET_BIT(n,pos) (n |= (0x01 << pos))
#define CLR_BIT(n,pos) (n &= (~0x01 << pos))  
#define GET_BIT(n,pos) ((n >> pos) & 0x01)

void display(int num);

int main(void) 
{
    char arr[100];
    int i;

    printf("문자열을 입력하시오: ");
    gets(arr);

    printf("결과 문자열 : ");
    for (i = 0; arr[i] != NULL; i++)
        printf("%c", arr[i] ^ 0x20);
    printf("\n");
    return 0;
}

void display(int num) 
{
    int i;
    i = sizeof(int) * 8;
    for( ; i > 0; i--) 
    {
        if (i % 4 == 0 && i != 32)
            printf(" ");
        printf("%d", GET_BIT(num, i));
    }
    printf("\n,");
}

// #define GET_BIT(n, pos) ((n) & (1 << (pos)))
// void display_bit(int value)
// {
//     int i;
//     for (i = 31; i >= 0; i--)
//     {
//         if (GET_BIT(value, i))
//             printf("1");
//         else
//             printf("0");
//     }
//     printf("\n");
// }