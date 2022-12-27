// 배열 선언과 함수 호출
int ary[5] = {1, 2, 3, 4, 5};
print_ary(ary);     // 배열명을 주고 함수 호출

// 함수 정의
void print_ary(int pa[5])       // 매개변수 자리에 ary 배열과 같은 배열 선언
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d", pa[i]);    // *(pa + i) 연산으로 배열 요소의 값 출력
    }
}
/* 매개변수 자리에 선언된 배열은 포인터로 바뀌므로 함수 안에서 sizeof 연산자로
배열의 크기를 알수 없습니다. 배열명에 sizeof 연산을 수행하면 단지 포인터 하나의 크기만 나옴
=> 따라서 배열 요소의 개수와 무관하게 배열을 처리하는 함수를 만들려면
    반드시 배열 요소의 개수를 따로 받아야 한다.
    */