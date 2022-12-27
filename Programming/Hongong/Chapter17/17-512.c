// 학생 5명의 국어, 영어, 수학 점수를 입력하여 총점, 평균, 학점을 구하고 총점 순으로
// 정렬하여 출력합니다. 학점은 평균이 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면
// C, 그 외는 F로 평가합니다.       성적 처리 프로그램
#include <stdio.h>

struct sub
{
    int num;        // 학번
    char name[20];  // 이름
    int kor;        // 국어
    int eng;        // 영어
    int mat;        // 수학
    int total;   // 총점
    double avg;     // 평균
    char grade;     // 학점
};

typedef struct sub Student;

int main(void)
{
    Student list[5];
    Student temp;
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("학번 : ");
        scanf("%d", &list[i].num);
        printf("이름 : ");
        scanf("%s", list[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d%d%d", &list[i].kor, &list[i].eng, &list[i].mat);
    }

    for (i = 0; i < 5; i++)
    {
        list[i].total = list[i].kor + list[i].eng + list[i].mat;
        list[i].avg = ((double)list[i].total) / 3;
    }

    for (i = 0; i < 5; i++)
    {
        if (list[i].avg >= 90)
            list[i].grade = 'A';
        else if (list[i].avg >= 80)
            list[i].grade = 'B';
        else if (list[i].avg >=70)
            list[i].grade = 'C';
        else
            list[i].grade = 'F';
    }

    printf("# 정렬 전 데이터...\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d %s %d %d %d %d %.1lf %c\n", list[i].num, list[i].name, 
        list[i].kor, list[i].eng, list[i].mat, list[i].total, list[i].avg, list[i].grade);
    }

    //데이터 정렬
	for (i = 0; i < 5; i++)
	{
		for (j = i; j < 5; j++)
		{
			if (list[i].total < list[j].total)
			{
				temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
    printf("# 정렬 후 데이터...\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d %s %d %d %d %d %.1lf %c\n", list[i].num, list[i].name, 
        list[i].kor, list[i].eng, list[i].mat, list[i].total, list[i].avg, list[i].grade);
    }

    return 0;
}
