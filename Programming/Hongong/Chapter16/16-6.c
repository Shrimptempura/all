// 명령행 인수를 출력하는 프로그램
#include <stdio.h>

int main(int argc, char **argv)     // 명령행 인수를 받을 매개변수
{
    int i;

    for (i = 0; i < argc; i++)      // 인수 개수 만큼 반복
    {
        printf("%s\n", argv[i]);    // 인수로 받을 문자열 출력
    }

    return 0;
}
/* 매개변수의 이름은 임의로 작성할 수 있으나 관례적으로 argc와 argv를 사용한다.
의미는 argument count, argument vector
명령행 인수의 개수 3은 argc 매개변수에 저장되고 명령행에서 입력한 문자열의 위치는
argv 매개변수 저장된다. 

명령행에서 프로그램을 실행시키면 운영체제는 명령행 인수를 가공하여 문자열의 형태로 메모리에
저장하고 포인터 배열로 연결한 후에 포인터 배열의 시작 위치를 실행 프로그램의 main 함수에 
넘긴다. 이때 명령행 인수의 개수도 함께 전달된다.

int main(int argc, char **argv);
argc ==> 명령행 인수의 개수 3개
argv ==> 포인터 배열의 시작 주소 100번지

8행은 argv가 연결하는 문자열을 하나씩 반복문으로 출력

명령행의 문자열 수는 argc가 받으므로 argc만큼 반복
argc의 값이 아닌 널 포인터를 활용하여 출력 방법도 있다.
명령행의 문자열을 연결하는 포인터 배열은 마지막 문자열 다음 배열 요소가 널 포인터이므로
널 포인터가 아닌 동안 출력하도록 while문으로 가능하다.

while (*argv != NULL)
{
    printf("%s\n", *argv);
    argv++;
}
단 이 방법은 argv의 값이 바뀌므로 명령행 인수를 다시 사용하지 않도록 주의해야 한다.. */