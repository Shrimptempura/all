#include <stdio.h>
#define PI 3.14
#define SIZE 10

typedef struct {
	int type;
	union {
		struct { double base, height; } tri;
		struct { double width, height; } rect;
		struct { double radius; } circ;
	} shape;
} Figure;

int main(void)
{
	Figure data[SIZE];
	int i = 0;
	char an;

	do
    {
		printf("저장하려는 도형의 종류를 입력하시오(0 = 삼각형, 1 = 사각형, 2 = 원): ");
		scanf("%d", &data[i].type);
		fflush(stdin);

		switch(data[i].type)
        {
			case 0 : 
				printf("삼각형의 밑변: "); scanf("%lf", &data[i].shape.tri.base);	
				printf("삼각형의 높이: "); scanf("%lf", &data[i].shape.tri.height);
				i++;
				break;

			case 1 : 
				printf("사각형의 밑변: "); scanf("%lf", &data[i].shape.rect.width);	
				printf("사각형의 높이: "); scanf("%lf", &data[i].shape.rect.height);
				i++;
				break;

			case 2 : 
				printf("원의 반지름: ");	scanf("%lf", &data[i].shape.circ.radius);
				i++;
				break;
			default:
				printf("숫자를 0 ~ 2사이 값을 입력하시오\n");
		} 
		fflush(stdin);

		printf("더 저장하시겠습니까?(y/n)\n");
		scanf("%c", &an);
	} while(an != 'n');

    return 0;
}