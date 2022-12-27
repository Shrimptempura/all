#include <stdio.h>
#include <stdlib.h>

int check();

int password = 1234;
int input_ps;

int main(void)
{
    while (check() == 0);

    printf("로그인 성공\n");

    return 0;
}

int check()
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("비밀번호 : ");
        scanf("%d", &input_ps);
        
        if (password == input_ps)
            return EXIT_FAILURE;
    }

    printf("로그인 횟수 초과\n");
    exit(1);
}