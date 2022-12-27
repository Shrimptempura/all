// 4행 5열의 행렬의 값을 저장할 2차원 배열을 동적 할당 코드 작성
/* 책에서는요
int **ary;
ary = (int *)malloc(sizeof(int *) * 4); 포인터 배열로 사용할 공간의 동적 할당, 세로 index0번만
for (i = 0; i < 4; i++)                 4개
{
    ary[i] = (int *)malloc(sizeof(int *) * 5)       5열 선언
}

for (i = 0; i < 4; i++)
{
    free(ary[i]);
}
free(ary);

예제) pi = (int *)malloc(sizeof(int));
1) sizeof(int) ==> 저장 공간을 할당하고 (void *)형 반환
2) (int *) ==> 반환되는 주소를 int형 변수의 주소로 형 변환
3) pi ==> int형을 가리키는 포인터에 저장

2차원 배열의 동적 할당 받는법!
1) 이중 포인터에 포인터 배열을 선언한다.
2) 선언된 포인터 배열에 변수 배열을 선언한다.
        동적 할당 해제는 할당받은 순서의 역순이다.

다른 예제)
int height = 5, width = 4;
int **ary;
int i, j;
ary = (int *)malloc(sizeof(int) * height) ==> 1차원배열 5칸 만들기 (세로)
for (i = 0; i < height; i++)
{
    ary[i] = (int *)malloc(sizeof(int) * width);
}   

<그니까!!> 처음 구조는 int **ary = (int *)malloc(sizeof(int) * height);
이걸로 0번째 index만 있는 배열 (여기서는 5줄)만들고
각 칸에 이제 for 문으로 넓이를 할당한 (여기서는 4줄)

2차원 동적 할당 해제 방법
for (i = 0; i < height; i++)
{
    free(ary[i]);
}
free(ary);

<전체 예제>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int height =6, width =8;
    int **arr;
    int i,j;

    arr=(int**)malloc(sizeof(int*)*height);
    for(i=0; i<height; i++)
    {
        arr[i] = (int*)malloc(sizeof(int)*width);
    }

    for(i=0; i<height; i++)
    {
        for(j=0; j<width; j++)
        {
            arr[i][j] = i+j+1;
        }
    }

    for(i=0; i<height; i++)
    {
        for(j=0; j<width; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<height; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
*/