// 도서명(title), 저자(author), 페이지수(page), 가격(price)을 멤버로 가지는 BOOK 구조체
#include <stdio.h>

struct book
{
    char title[20];
    char author[20];
    int page;
    double price;
};
