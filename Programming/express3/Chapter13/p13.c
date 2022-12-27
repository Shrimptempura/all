// 삼각형, 사각형, 원을 동시에 표현할 수 있는 공용체를 설계하라. 삼각형은 밑변과 높이
// 사각형은 가로와 세로, 원은 반지름만 저장하도록 해라, 현재의 공용체가 표현하고 있는
// 도형의 종류 열거형 변수를 사용하여 나타낸다. 사용자로부터 도형의 종류와
// 도형의 데이터를 받아서 저장하여 보자
#include <stdio.h>

enum dohyung {TRI, RECT, CIRC};

struct shape {
    int type;
    union {
        struct {int base, height;} tri;     // 삼각형 데이터
        struct {int width, height;} rect;   // 사각형 데이터
        struct {int radius;} circ;           // 원 데이터
    } data;
} Model;

int main(void)
{
    // struct shape Model;
    // enum dohyung dh;

    printf("도형의 종류를 선택하시오 :(0, 1, 2) ");
    scanf("%d", &Model.type);

    switch(Model.type)      // enum dohyung의 변수명 dh가능
    {
        case TRI:
            printf("가로와 세로의 길이를 입력하시오(예로 들어서 100 200) : ");
            scanf("%d %d", &Model.data.tri.base, &Model.data.tri.height);
            printf("면적은 %lf\n", Model.data.tri.base * Model.data.tri.height * 0.5);
            break;  // %d, (int)(Model.data.tri.base * Model.data.tri.height * 0.5); 로 가능
        case RECT:
            printf("가로와 세로의 길이를 입력하시오(예로 들어서 100 200) : ");
            scanf("%d %d", &Model.data.rect.width, &Model.data.rect.height);
            printf("면적은 %d\n", Model.data.rect.width * Model.data.rect.height);
            break;
        case CIRC:
            printf("가로와 세로의 길이를 입력하시오(예로 들어서 100 200) : ");
            scanf("%d", &Model.data.circ.radius);
            printf("면적은 %lf\n", Model.data.circ.radius * Model.data.circ.radius * 3.14);
            break;
    }

    return 0;
}