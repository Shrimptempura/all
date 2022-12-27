#include <stdio.h>

int main(void)
{
    char a[4][10] = { "horse", "fox", "hippo", "tiger" };
    char *pa[] = { a[0], a[1], a[2], a[3] };
    int count;
    int i;
    
    count = sizeof(pa) / sizeof(pa[0]);
    for (i = 0; i < count; i++)
    {
        printf("%c", pa[i][i]);
    }

    return 0;
}
/* 실행결과 : hope
a라는 2차원 배열을 만들어서 네줄에 한줄씩 동물 문자열 박음
그걸 *pa라는 포인터 배열이 4줄을 가짐, count는 4니까
for는 i = 0~3 ++ 출력인데
pa[i][i] => 00; 11; 22; 33; 출력하는데 h, o, p, e 출력
pa[2][2] => *(pa[2] + 2); => *(300 + (2 * sizeof(int))) => *(308)
*/