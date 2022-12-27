// 구조체를 저장할 수 있는 공간을 할당받아 사용, 구조체의 배열이 필요시 구조체의 크기
// 에 필요한 개수를 곱해준다. 동적으로 생성된 구조체는 포인터를 통해서만 접근가능
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int number;
    char title[50];
};

int main(void)
{
    struct Book *p;     // 구조체를 가리킬 수 있는 포인터 변수 선언

    p = (struct Book *)malloc(2 * sizeof(struct Book));
    // malloc()을 이용하여 구조체 2개 분량의 메모리를 동적으로 할당받는다.
    // 이 메모리 블록의 시작 주소를 p에 대입한다.
    if (p == NULL) 
    {
        printf("메모리 할당 오류\n");
        exit(EXIT_FAILURE);
    }

    p[0].number = 1;
    strcpy(p[0].title, "C Programmning");

    p[1].number = 2;
    strcpy(p[1].title, "Data structure");

    free(p);

    printf("%s\n", p[0].title);
    printf("%s\n", p[1].title);
    return 0;
}