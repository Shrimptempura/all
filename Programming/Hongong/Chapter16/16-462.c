#include <stdio.h>

int main(void)
{
    int ary[5] = {1, 2, 3, 4, 5};
    int *pa, *pb, *pc;
    int i;
    pa = (int *)malloc(sizeof(ary));

    for (i = 0; i < 5; i++)
    {
        pa[i] = ary[i];
    }

    pb = (int *)calloc(pa[3], sizeof(int));
    pc = (int *)realloc(NULL, pa[4]);

    free(pa);

    return 0;
}
// 풀이 예제;
// pa, pb, pc중 pa가 할당영역이 가장크미
/* pa = sizeof(ary) 배열 5개 int형 4 * 5 = 20bite
pb = calloc, pa[3]은 4번째 index pa[3] = 4, pb = 4 * 4 = 16bite
pc = realloc, realloc의 첫번째 인수가 NULL이면 두번째 인수의 바이트 만큼 동적할당
pa[4] = 5 이므로, pc = 5bite */