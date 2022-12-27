// calloc 함수는 할당한 저장 공간을 '0'으로 초기화, realloc 함수는 크기를 조절한다.
// 메모리를 동적으로 할당하여 0으로 초기화된 메모리 공간을 얻고자 할때 calloc 함수 사용시 편리
// calloc 함수 원형; void *calloc(unsigned int, unsigned int); ==> void *; 반환값(맨뒤2개 매개변수)
// realloc 함수 원형; void *realloc(void *, unsigned int); ==> 맨 앞 void *; 반환값(맨뒤2개 매개변수)
// calloc, realloc 함수를 사용한 양수 입력
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;            // 할당한 저장 공간을 연결할 포인터
    int size = 5;       // 한 번에 할당할 저장 공간의 크기, int형 변수 5개씩
    int count = 0;      // 현재 입력된 양수 개수
    int num;
    int i;

    pi = (int *)calloc(size, sizeof(int));      // 먼저 5개의 저장 공간 할당
    while (1)
    {
        printf("양수만 입력하세요 => ");
        scanf("%d", &num);      // 데이터 입력
        if (num <= 0) break;    // 0또는 음수이면 종료
        if (count == size)      // 저장 공간을 모두 사용하면
        {
            size += 5;          // 크기를 늘려서 재할당
            pi = (int *)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;
    }

    for (i = 0; i < count; i++)
    {
        printf("%5d", pi[i]);   // 입력 데이터 출력
    }
    free(pi);       // 동적 할당 저장 공간 반납

    return 0;
}
/* 17행 pi = (int *)malloc(size, sizeof(int)); calloc 함수를 호출하는데 인수는 2개
sizeof(int)는 malloc 함수와 마찬가지로 할당할 저장 공간의 크기를 바이트 단위로 준다.
만약 배열 요소가 5개인 double형 배열처럼 사용할 공간이 필요할 시 아래처럼 사용한다.
    double *pd;
    pd = (double *)calloc(5, sizeof(double)); ==> 5는 배열 요소의 개수
        sizeof(double)은 double형 변수 하나의 바이트 크기

    calloc 함수는 할당한 저장 공간을 모두 '0'으로 초기호 하므로 만약 '0'으로 초기화 
    필요한 경우 개이득이다.

    23행은 입력한 양수 개수와 현재 저장 공간의 크기를 비교하여 재할당 여부 결정한다.
    if (count == size)      // 저장 공간을 모두 사용하면..

    만약 저장 공간의 크기를 조정해야 하면 realloc 함수 사용한다. realloc 함수는
    이미 할당한 저장 공간의 포인터와 조정할 저장 공간의 전체 크기를 준다.
    프로그램 실행 중에 입력한 양수가 5개를 넘으면 25행에서 size가 10으로 증가하므로
    결국 저장 공가은은 10개로 늘어난다
    pi = (int *)realloc(pi, 10 * sizeof(int));
        10 * sizeof(int); ==> 재할당 후 전체 공간의 크기
        pi; ==> 이미 할당한 저장 공간의 포인터

    저장 공간을 늘리는 경우 이미 입력한 값은 그대로 유지되며 추가된 공간에는
    쓰레기 값이 존재한다. 저장 공간을 줄이는 겨우라면 입력된 데이터는 잘려나간다.
    저장 공간의 크기를 조정한 후에는 다시 그 주소를 반환하므로 포인터에 저장해 사용한다.

    이미 사용하던 저장 공간의 위치를 포인터가 기억하고 있더라도 재할당 과정에서
    메모리의 위치가 바뀔 수 있으므로 항상 realloc 함수가 반환하는 주소를 다시 포인터에
    저장해 사용하는 것이 좋다. 메모리의 위치가 바뀌는 경우 이미 있던 데이터는 계속
    사용할 수 있도록 옮겨 저장하며 사용하던 저장 고간은 자동으로 변환한다.
    또한 첫번째 인수가 널 포인터인 경우는 malloc과 같은 기능을 수행하여 
    두번째 인수의 크기만큼 동적 할당하고 그 주소를 반환한다. */