// 동적 구조체 배열을 이용한 영화 관리 프로그램, 물론 동적 정적 배열을 사용시 쉽다.
// + 사용자가 입력하고자 하는 영화의 수를 size에 입력받은 후, size 개의 MOVIE 구조체를
// 저장할 수 있는 메모리 공간을 동적 할당받아, 이주소를 moves에 저장하자
#include <stdio.h>
#include <stdlib.h>

typedef struct movie {
    char title[100];
    double rating;
} MOVIE;

int main(void)
{
    MOVIE *movies;
    int size, i;

    printf("몇 편이나 저장하시겠습니까? ");
    scanf("%d", &size);
    getchar();

    movies = (MOVIE *)malloc(sizeof(MOVIE) * size);
    if (movies == NULL)
    {
        printf("동적 메모리 할당 오류");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < size; i++)
    {
        printf("영화 제목 : ");
        gets(movies[i].title);
        printf("영화 평점 : ");
        scanf("%lf", &(movies[i].rating));
        getchar();
    }

    printf("=================================\n");
    printf("제목 평점\n");
    printf("=================================\n");
    for (i = 0; i < size; i++)
        printf("%s \t %f\n", movies[i].title, movies[i].rating);
    printf("=================================\n");
    free(movies);

    return 0;
}