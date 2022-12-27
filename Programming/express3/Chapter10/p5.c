// 0부터 9까지의 난수 생성 100번 하여 가장 많이 생성된 수를 출력하는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int i, max, key;
    int ary[10];

    for (i = 0; i < 100; i++)
    {
        ++ary[rand() % 10];     // ary[0 ~ 9]++
    }

    max = 0;
    for (i = 0; i < 10; i++)
    {
        if (ary[max] < ary[i])
            max = i;   // max = ary[i]를 하면 인덱스(여기서는 누적 수)를 max에 대입
    }                   // 그래서 max = i을 대입하면 인덱스 번호나옴 단 max값 별도
    printf("가장 많이 나온 수 = %d\n", max);

    return 0;
}

//     <이걸 윗 줄로 줄일 수 있다.>
//     printf("가장 많이 나온 횟수 : %d\n", max);

//     key = max;
//     for (i = 0; i < 10; i++)
//     {
//         if (ary[i] == key)
//             printf("가장 많이 나온 수 = %d\n", i);    
//     }

//     return 0;
// }