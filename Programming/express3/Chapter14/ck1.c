#include <stdio.h>

// 1) int main(void)
// {
//     int i = 80;
//     int *p = &i;
//     int **dp = &p;

//     **dp = 90;      // 평면이 아니라, 입체적.. 스택적으로 생각해라
//     *p = 100;

//     printf("%d %d %d\n", i, *p, **dp);

//     return 0;
// }
// // 100, 100, 100


// 2) int main(void)
// {
//     int m[3][2] = {1, 2, 3, 4, 5, 6};

//     printf("%d\n", **m);
//     printf("%d\n", *m[1]);

//     return 0;
// }
// // 1, 3

// int main(void)
// {
//     char *a[] = {"서울", "부산", "인천", "대구"};
//     char **x;
//     x = a;

//     printf("%s\n", *x);

//     return 0;
// }
// // 서울
// int main(void)
// {
//     int a[2][3] = {
//         {1, 2, 3},
//         {4, 5, 6} };
//     int (*p)[3] = a;
//     printf("%d", p[1][1]);

//     return 0;
// }
// // 2 