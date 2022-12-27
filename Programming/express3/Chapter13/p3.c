// 구조체를 이용하여 이메일을 표현할 수 있는 구조체를 정의, 적당한 초기값 부여하는 프로그램
#include <stdio.h>
#include <string.h>
struct email {
    char title[100];
    char receiver[50];
    char sender[50];
    char content[1000];
    char date[100];
    int priority;
};

void print(struct email e) {
    printf("제목: %s\n", e.title);
    printf("수신자: %s\n", e.receiver);
    printf("발신자: %s\n", e.sender);
    printf("내용: %s\n", e.content);
    printf("날짜: %s\n", e.date);
    printf("우선순위: %d\n", e.priority);
}

int main(void)
{
    struct email e;
    strcpy(e.title, "안부 메일");
    strcpy(e.receiver, "chulsoo@hankuk.ac.kr");
    strcpy(e.sender, "hsh@hankuk.ac.kr");
    strcpy(e.content, "안녕하십니까? 별일 없으신지요?");
    strcpy(e.date, "2010/9/1");
    e.priority = 1;

    print(e);
    return 0;
}