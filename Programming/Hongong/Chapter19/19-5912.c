// sub.c
static int key;     // 정적 전역 변수로 main.c에서 extern 선언으로 공유할 수 없음
void set_key(int val)   // 정적 전역 변수 key의 값을 설정하는 함수
{
    key = val;
}

int get_key(void)       // 정적 전역 변수 key의 값을 다른 파일에서 사용할 수 있도록 반환
{
    return key;
}