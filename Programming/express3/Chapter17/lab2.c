// 성적처리 프로그램, 사용자한테 학생이 몇명인지 물어보고 적절한 동적 메모리 할당
// 사용자로부터 성적을 받아서 저장하였다가 다시 출력한다.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *score;
    int i, students;

    printf("학생의 수 : ");
    scanf("%d", &students);

    score = (int *)malloc(students * sizeof(int));
    if (score == NULL)
    {
        printf("동적 메모리 할당 오류\n");
        exit(1);    // exit(EXIT_FAILURE);
    }

    for (i = 0; i < students; i++)
    {
        printf("학생 #%d 성적 : ", i + 1);
        scanf("%d", &score[i]);
    }

    printf("=================================\n");
    for (i = 0; i < students; i++)
    {
        printf("학생 #%d 성적 : %d\n", i + 1, score[i]);
    }
    printf("=================================\n");
    free(score);

    return 0;
}