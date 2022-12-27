// 동적 할당 영역을 배열처럼 사용
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;            // 동적 할당 영역을 연결할 포인터
    int i, sum = 0;     // 반복 제어 변수와 누적 변수

    pi = (int *)malloc(5 * sizeof(int));    // 저장 공간 20바이트 할당
    if (pi == NULL)                         // 11 ~ 15행, 메모리가 부족할 때의 예외 처리 구문
    {
        printf("메모리가 부족합니다.\n");
        exit(1);
    }
    printf("다섯 명의 나이를 입력하세요 : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &pi[i]);        // 배열 요소에 입력
        sum += pi[i];               // 배열 요소의 값 누적
    }
    printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));       // 평균 나이 출력
    free(pi);       // 할당한 메모리 영역 반환  

    return 0;
}
/* 19행은 할당한 메모리를 배열처럼 사용하여 값 입력, 포인터 pi를 마치 배열인 것처럼
배열 요소 표현식을 사용하면 된다. scanf 함수는 데이터를 저장할 공간의 주소가 필요하므로
pi + 1와 같이 직접 포인터 계산식을 사용하는 것도 가능하다. */