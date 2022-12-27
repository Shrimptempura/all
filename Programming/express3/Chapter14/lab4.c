// main_arg.c
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++)
        printf("명령어 행에서 %d번째 문자열 = %s\n", i, argv[i]);

    return 0;
}

// 기존의 main() 함수와 달리 2개의 인수를 전달 받는다.
// for를 사용한 반복 루프에서 i가 0에서부터 argc보다 작을 때까지 argv[i]를
// 문자열 형태로 출력한다. 현재 argc가 3이므로 i값이 0에서 2까지 반복되고 따라서
// argv[0]부터 argv[2]가 가리키는 문자열이 출력된다.

// 1) DOS창을 사용한다. 컴파일/링크가 끝난 뒤에 DOS 창을 열어서 해당 실행 파일이
// 존재하는지를 확인한 다음에 다음과 같이 직접 입력한다.
// > mainarg sec dst
