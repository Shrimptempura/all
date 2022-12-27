// 사용자 정의 헤더파일
// 매크로 함수 정의
#define FUNC(x, y, z) (((x) * (y)) / (z))

// 구조체 선언
struct robot
{
    char skill[20];
    int energy;
};

// 전역 변수 선언과 초기화
int key_flag = 0;

// 함수 선언
int input_data_from_file(void);

/*
헤더파일일시 3번 초기화된 전역 변수의 선언은 헤더 파일이 여러 파일에 인클루드되었을 때
전역 변수의 중복 문제가 발생합니다. */