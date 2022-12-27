// main.c
#include <stdio.h>
extern void set_key(int);       // sub.c 파일에 있는 함수의 선언 extern은 생략가능
extern int get_key(void);       // sub.c 파일에 있는 함수의 선언 extern은 생략가능
int key;        // 전역 변수 선언, sub.c 파일의 key는 static이므로 중복되지 않는다.
int main(void)
{
    int res;
    set_key(10);        // sub.c의 static key에 인수 10 저장
    key = get_key();    // sub.c의 key값을 main.c의 전역 변수 key에 저장
    set_key(20);        // sub.c의 static 전역 변수 key의 값을 20으로 바꿈
    res = key + get_key();      // main.c의 전역 변수 key와 sub.c의 static key의 합
    printf("%d\n", res);

    return 0;
}
/*
9행의 key값을 sub의 키에 10저장(static)
10행, get_key()로 sub의 키 값(10)을 main.c로 불러냄, main.c의 key의 값은 10이됨
11행, sub의 키 값 20이 됨
12행, main.c의 키 값 + sub.c의 키 값 = 30
*/