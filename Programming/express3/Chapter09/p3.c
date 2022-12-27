// 로그인시 아이디를 검사하는 함수 int check()를 작성해서 테스트해라. check()가 한번
// 호출 될 때마다 비밀번호를 질문하고 일치 여부를 0과 1로 반환한다. 비밀번호는 숫자
// 1234로 고정되어 있다고 가정한다. check()가 3번 이상 호출되고 아이디가 일치하지 않으면
// check()는 "로그인 시도 횟수 초과" 출력, check()함수 안에 정적 변수를 선언하여 사용하자
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int check(void);

int main(void)
{
    int che;
    while(1)
    {
        che = check();

        if (che == 0)
        {
            printf("로그인 성공\n");
            exit(1);
        }
        else if (che == 1)
            printf("로그인 실패\n");
    }

    return 0;
}

int check(void)
{
    static int count;
    int answer = 1234;
    int pw;
        
    printf("비밀번호 : ");
    scanf("%d", &pw);
    getchar();

    if (answer == pw)
        return 0;
    else
    {
        count++;
        if (count == 3)
        {
            printf("로그인 시도 횟수 초과\n");
            exit(1);
        }
        return 1;
    }
}