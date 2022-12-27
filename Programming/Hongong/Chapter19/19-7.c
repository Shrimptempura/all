// #prama 지시자는 컴파일러의 컴파일 방법을 세부적으로 제어할 때 사용한다. 사용법은
// 지시명(directive - name)을 통해 컴파일러의 어떤 기능을 제어할 것인지 알려준다.
// pack은 구조체의 패딩 바이트 크기를 결정하며, warning 경고메시지 관리한다.
// #pragma를 사용한 바이트 얼라인먼트 변경
#include <stdio.h>
#pragma pack(push, 1)       // 바이트 얼라인먼트를 1로 바꿈
typedef struct
{
    char ch;
    int in;
} Sample1;

#pragma pack(pop)           // 바꾸기 전의 바이트 얼라인먼트 적용
typedef struct
{
    char ch;
    int in;
} Sample2;

int main(void)
{
    printf("Sample1 구조체의 크기 : %d바이트\n", sizeof(Sample1));
    printf("Sample2 구조체의 크기 : %d바이트\n", sizeof(Sample2));

    return 0;
}
/*
#pragma pack은 구조체의 바이트 얼라인먼트 단위 크기를 결정합니다. 6행은 단위 크기를
1로 설정하여 구조체 멤버가 메모리의 모든 위치에 할당할 수 있도록 한다.
    #pragma pack(push, 1)       // 바이트 얼라인먼트를 1로 바꿈

<따라서> 이후에 어떤 구조체를 정의하더라도 패딩 바이트를 포함하지 않으면 구조체의 크기는
멤버의 크기를 모두 더한 크기가 됩니다. push는 바이트 얼라인먼트를 바꿀 때 현재의 규칙을
기억한다. <따라서> 바꾸기 전의 바이트 얼라인먼트 규칙을 적용하고자 하면 13행과 같이
pop을 사용하여 이전의 규칙을 복원할 수 있다. 또한 push, pop을 사용하지 않고 크기만
사용하는 것도 가능하다.
    #pragma pack(1)     // 바이트 얼라이먼트의 단위 크기를 1로 설정


특정 경고 메시지 표시하지 않는 법
#pragma warning(disable:4101)       // 4101번 경고 메시지는 모두 표시하지 않음
*/