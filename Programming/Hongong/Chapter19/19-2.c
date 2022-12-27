#include <stdio.h>
#define PI 3.14159      // 상수를 매크로명으로 정의
#define LIMIT 100.0     // 상수를 매크로명으로 정의
#define MSG "passed!"   // 문자열을 매크로명으로 정의
#define ERR_PRN printf("허용 범위를 벗어났습니다!\n")   // 출력문을 매크로명으로 정의
                                                        // ';' 안붙임
int main(void)
{
    double radius, area;

    printf("반지름을 입력하세요(10이하) : ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    if (area > LIMIT) ERR_PRN;      // 면적이 100을 초과하면 오류메시지 출력
    else printf("원의 면적 : %.2lf (%s)\n", area, MSG);

    return 0;
}
/*
만약 매크로명을 정의할 때 치환될 부분이 길어 여러줄에 쓰게 되면 '\'로 연결
#define INTRO "Perfect C Language \
& Basic Data Structure"     요렇게

매크로명은 문제가 발생하면 어떤 형태로 치환되는지 다시 확인해야 하므로 디버깅과
유지보수가 힘들다. <즉> 컴파일러는 전처리가 끝난 후에 치환된 소스 코드로 컴파일하고
사용자는 매크로명으로 작성된 소스코드를 보게 되므로 컴파일러가 표시하는 에러 메시지를
소스코드에서 즉시 확인하기 힘들다. <따라서> 매크로명은 필요경우만 제한적 쓰는것이 좋다.
*/