// 이미 정의된 매크로
#include <stdio.h>

void func(void);

int main(void)
{
    printf("컴파일 날짜와 시간 : %s, %s\n\n", __DATE__, __TIME__);
    printf("파일명 : %s\n", __FILE__);
    printf("함수명 : %s\n", __FUNCTION__);
    printf("행번호 : %d\n", __LINE__);

#line 100 "macro.c"     // 행 번호를 100부터 시작, 파일명은 macro.c로 표시
    func();             // 여기부터 행 번호는 100으로 시작
    
    return 0;
}

void func(void)
{
    printf("\n");
    printf("파일명 : %s\n", __FILE__);
    printf("함수명 : %s\n", __FUNCTION__);
    printf("행번호 : %d\n", __LINE__);
}
/*
매크로명 DATE와 TIME은 컴파일을 시작한 날짜와 시간으로 치환되고, FILE은 전체 디렉터리 경로를
포함한 파일명으로 치환됩니다. FUNCTION은 매크로명이 사용된 함수 이름으로 치환되므로
10행은 main으로 23행은 func으로 치환됩니다. LINE은 매크로명이 사용된 행 번호로 치환된다
첫번째 LINE은 11행에서 사용했으므로 정수 11이 된다

매크로명 FILE과 LINE은 #line 지시자로 그 정의를 바꿀수 있다. #line 지시자는 매크로명
LINE의 행 번호를 셀 때 그 시작값을 설정한다. <즉> 13행에서 시작 행 번호를 100으로 설정
했으므로 14행부터 100을 시작으로 행 번호가 1씩 증가합니다. 결국 24행의 LINE 매크로명은
110으로 치환된다. <또한> FILE이 치환되는 파일의 이름도 바꿀수 있다. FILE은 기본적으로
경로까지 포함된 파일명으로 치환되어 복잡하므로 #line 지시자에 파일명을 표시하면
간단한 파일명으로 치환할수 있다. 이때 행 번호는 정수를 사용하고 파일명은 문자열을 사용한다.
행 번호만 바구고 싶으면 파일명은 생략할수 있으나 파일명만 사용하는 것은 불가능하다

#line 100               // __LINE__ 행 번호 설정
#line 100 "macro.c"     // __LINE__ 행 번호 설정, __FILE__ 이름 설정
#line "macro.c"         // 사용할수 없음

__FILE__        전체 디렉터리 경로를 포함한 파일명
__FUNCTION__    매크로명이 사용된 함수 이름
__LINE__        매크로명이 사용된 행 번호
__DATE__        컴파일을 시작한 날짜
__TIME__        컴파일을 시작한 시가
*/