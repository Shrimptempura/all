// 책을 나타내는 구조체 book 선언, 제목, 저자, 분야/
#include <stdio.h>
#include <string.h>

struct book {
    int id;
    char title[100];
    char author[20];
};

int main(void)
{
    struct book b;

    b.id = 1;
    strcpy(b.title, "바람과 함께 사라지다.");
    strcpy(b.author, "마가렛 미첼");

    printf("%d, %s, %s\n", b.id, b.title, b.author);

    return 0;
}