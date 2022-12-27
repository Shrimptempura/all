// 명령행 인수
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    for (i = argc - 1; i > 1; i--)
        printf("%s ", argv[i]);
    printf("\n");

    return 0;
}

// int argc : 메인함수에 전달되는 정보의 개수
// char *argv[] : 메인함수에 전달되는 실질적인 정보, 문자열의 배열
//                    첫번째 문자열은 프로그램의 실행경로
// i love you
// argv[0] : 실행 경로
// argv[1] : i
// argv[2] : love
// argv[3] : you
// argc에는 4가 들어감