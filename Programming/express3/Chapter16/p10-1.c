#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SET_BIT(n,pos) ( n |= (0x01 << pos) )
#define CLR_BIT(n,pos) ( n &= (~0x01 << pos) )
#define GET_BIT(n,pos) ( (n >> pos) & 0x01 )

void display(char *arr);

int main(void) 
{
    srand((unsigned)time(NULL));
    char arr[100], key;
    int i;
    // key = 0x49;
    key = rand();

    printf("암호를 입력하세요,: ");
    gets(arr);

    display(arr);
    for (i = 0; arr[i] != NULL; i++)
        arr[i] = arr[i] ^ key;
    printf(" 은 ");
    display(arr);
    printf(" 로 암호화\n");

    display(arr);
    for (i = 0; arr[i] != NULL; i++)
        arr[i] = arr[i] ^ key;
    printf(" 은 ");
    display(arr);
    printf(" 로 복호화\n");

    return 0;
}

void display(char *arr) 
{
    int i;
    for (i = 0; arr[i] != NULL; i++)
        printf("%c", arr[i]);
}

