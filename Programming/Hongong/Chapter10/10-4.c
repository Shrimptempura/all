// 포인터의 뺄셈과 관계 연산
#include <stdio.h>

int main(void)
{
    int ary[5] = {10, 20, 30, 40, 50};
    int *pa = ary;      // 첫 번째 배열 요소
    int *pb = pa + 3;   // 네 번째 배열 요소

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);
    pa++;       // pa를 다음 배열 요소로 이동
    printf("pb - pa : %u\n", pb - pa);  // 두 포인터의 뺄셈

    printf("앞에 있는 배열 요소의 값 출력 : ");
    if (pa < pb) printf("%d\n", *pa);       // pa가 배열의 앞에 있으면 *pa 출력
    else printf("%d\n", *pb);               // pb가 배열의 앞에 있으면 *pb 출력

    return 0;
}
/*가르키는 자료형이 같으면 포인터끼리의 뺄셈 가능 but 다른 방식으로 작용

포인터 - 포인터 ==>  값의 차 / 가리키는 자료형의 크기
12행: pb -pa ==> (40 - 32) / sizeof(int) ==> 8 / 4 ==> 2
                    값의 차     가리키는 자료형의 크기 

========> 위에서 pb는 pa + 3 값이라.. pa의 값이 바뀜으로 다시
재초기화가 되지 않음. 그냥 그대로 이어감..
*/