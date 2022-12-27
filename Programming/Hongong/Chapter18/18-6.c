// 텍스트 파일 : 데이터를 아스키 코드 값에 따라 저장한 것
// 바이너리 파일 : 그 이외의 방식으로 저장한 것, 해당 기록 방식을 적용한 별도의 프로그램 사용
/* 개방모드         파일의 용도                     바이너리 파일(b)  텍스트 파일(t)
        rb      바이너리 파일을 읽기 위해 개방
        wb              ""      쓰기 위해 개방
        ab              ""      끝에 추가하기 위해 개방
파일의 형태를 별도로 표시하지 않으면 자동으로 텍스트 파일로 개방,
파일의 형태와 개방모드가 다르면 문제가 심각하다.. */
// 파일의 형태와 개방 모드가 다른 경우
#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ary[10] = {13, 10 ,13, 13, 10, 26, 13, 10, 13, 10};
    int i, res;

    fp = fopen("a.txt", "wb");  // 바이너리 파일로 개방, 'w'여서 그럼
    for (i = 0; i < 10; i++)
    {
        fputc(ary[i], fp);      // 배열 요소의 각 값에 해당하는 아스키 문자 출력
    }
    fclose(fp);     // 파일 닫음

    fp = fopen("a.txt", "rt");  // 같은 파일을 텍스트 파일로 개방
    while (1)
    {
        res = fgetc(fp);        // 파일에서 한 문자 입력
        if (res == EOF) break;
        printf("%4d", res);     // 입력한 문자의 아스키 값 출력
    }
    fclose(fp);     // 파일 닫음

    return 0;
}
/*
이 예제는 10개의 아스키 문자를 바이너리 파일로 저장한 후에 다시 텍스트 모드로 
개방하여 제대로 읽히는지 확인한다. 먼저 15행에서 10개의 아스키 코드 값을 배열에 초기화한다
ary 배열 13 10 26.. 각각 아스키 코드 값은
10은 \n, 13은 리턴 \r, 26은 ctrl + d...
a.txt 파일은 25행에서 다시 텍스트 모드로 개방하고 파일의 데이터를 모두 읽어 
그 아스키 코드 값을 출력한다... 실행 결과는 10개중에 3개의 문자만 입력이 되는데...
그 이유는 fgetc 함수가 텍스트 모드로 개방된 파일을 읽는 방식 때문이다.

방식1) fgetc 함수는 리턴 문자(\r)를 읽으면 버리고 다음의 개행문자(\n) 하나만 입력한다.

방식2) fgetc 함수는 Ctrl + D에 대한 아스키 문자를 읽으면 파일의 끝으로 인식합니다.
Ctrl + D를 읽으면 EOF를 반환하여 입력 잡업을 끝낸다.

<반면에> 텍스트 파일에 출력하는 함수는 개행 문자를 출력할 때 리턴 문자를 추가하여
2개의 문자를 파일에 출력한다. 이 동작은 텍스트 모드로 개방된 파일에서만 수행되며
바이너리 모드로 개방된 파일은 파일의 내용을 있는 그대로 읽거나 쓴다.

운영체제에 따라 줄 바꾸는 방식이 다를 수 있다.
유닉스에선 \n 만 사용, 애플의 macOS는 \r 사용, <따라서> 유닉스 시스템은
파일의 형태를 텍스트를 파일과 바이너리 파일로 구분하지 않으며 모두 바이너리 파일로 취급한다.
*/