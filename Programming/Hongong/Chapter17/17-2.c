// 배열과 포인터를 멤버로 갖는 구조체 사용
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #pragma pack(1);

struct profile          // 신상명세 구조체 선언
{
    char name[20];
    int age;
    double height;
    char *intro;        // 자기 소개를 위한 포인터
};

int main(void)
{
    struct profile yuni;                    // profile 구조체 변수 선언

    strcpy(yuni.name, "서하윤");            // name 배열 멤버에 이름 복사
    yuni.age = 17;                          // age 멤버에 나이 저장
    yuni.height = 164.5;                    // height 멤버에 키 저장

    yuni.intro = (char *)malloc(80);        // 자기소개를 저장할 공간 동적 할당
    printf("자기소개 : ");
    gets(yuni.intro);                       // 할당한 공간에 자기소개 입력

    printf("이름 : %s\n", yuni.name);
    printf("나이 : %d\n", yuni.age);
    printf("키 : %.1lf\n", yuni.height);
    printf("자기소개 : %s\n", yuni.intro);  
    free(yuni.intro);       // 동적 할당 영역 반환

    return 0;
}