// 이중 포인터를 사용한 포인터 교환
#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main(void)
{
    char *pa = "success";
    char *pb = "failure";

    printf("pa -> %s, pb -> %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s, pb -> %s\n", pa, pb);

    return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
    char *pt;

    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}
/* 이 예제는 포인터의 값을 수시로 바꾸기 위해 그 기능을 함수로 만든다. 
두 변수의 값을 바꾸는 함수는 변수의 주소를 인수로 주고 그 주소를 간접참조 하여 변수의
값을 바꿔야 한다. --> 그런데; 12행에서 바꾸고자 하는 변수 pa, pb는 포인터이므로
함수의 인수로 포인터의 주소를 줘야하고      <결국>
    그 값을 받는 매개변수로 이중 포인터를 사용한다. */
