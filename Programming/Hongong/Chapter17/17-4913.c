#include <stdio.h>

struct profile
{
    int num;
    char *name[20];
    char *skill;
};

struct sports
{
    char *event;
    struct profile player;
};
struct sports a;

/*
1) strcpy(a.event, "figure skating");
2) a.player.name = "Yuni Seo";
3) a.num = 19;
4) scanf("%s", a.player.skill);

1,2,3,4 모두 오류가 있다 무엇일까?
1번)
    첫번째 인수로 받은 주소에 문자열을 복사하므로 event에 복사받을 공간을 먼저 확보후에
    복사해야한다.
    a.event = (char *)malloc(80);
    strcpy(a.event, "figure skaing");

2번)
    name은 배열명으로 주소상수이므로, 대입 연산자 왼쪽에 올 수 없다.

3번)
    a.num = 19; num --> profile의 멤버, a.player.num = 19;가 맞다

4번)
    scanf("%s", a.player.skill); skill --> 포인터, 먼저 입력한 문자열을 저장할
    공간을 먼저 확보후 입력해야 한다.
    */