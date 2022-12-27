// 10개 정도의 속담을 문자열의 형태로 함수 set_proverb() 내부에 저장하고 있다가
// 사용자가 ser_proverb()을 호출하면 인수로 받은 이중 포인터를 이용하여 외부에
// 있는 char형 포인터 s를 설정하는 set_proverb()을 작성 및 테스트
#include <stdio.h>

void set_proverb(char **q, int n);

int main(void)
{
    int num;
    char *s = NULL;

    printf("몇 번째 속담을 선택하시겠습까? : ");
    scanf("%d", &num);

    set_proverb(&s, num);

    printf("selected proverb = %s\n", s);
    
    return 0;
}

void set_proverb(char **q, int n)
{
    static char *array[10] = {"A bad shearer never had a good sickle.",
        "A bad workman (always) blames his tools.",
        "A bad workman quarrels with his tools.",
        "A bad thing never dies."};
    *q = array[n];
};