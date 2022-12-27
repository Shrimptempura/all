#include <stdio.h>

int main(void)
{
    int ary[5] = {10, 20, 30, 40, 50};
    void *vp = ary;

    printf("%d\n", ((int *)vp)[2]);

    return 0;
}
/*      *(int *)vp; ==> 10 출력
        *(int *)vp; + 2 ==> 12 출력
        *(int *)vp;     1) (int *) <-> vp      vp을 (int *)형으로 변환
                        2) * <-> (int *)vp     변환된 vp가 가리키는 변수 참조
    일단 ary가 int형이니 (int *)vp 까지는 맞다. *붙이면 *(int *)vp는
    변환된 int *형인 vp가 가리키는 변수 참조
    지금은 배열의 시작주소값 10을 가짐
    이제 배열의 index 2번 = 30을 호출할려면
        *(int *)vp + 2;는 배열의 시작위치 10에 "정수 2"를 더하는 값이라 12가 나옴
        30번째는 index[2]번임, 직접 배열요소 지정해서 출력해보자
            int *형인 vp의 [2]번째 인덱스 값
            ==> ((int *)vp)[2];
        살짝 햇갈림! */