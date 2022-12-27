#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void)
{
	struct date d1, d2;
	d1.year = 2018;
	d1.month = 10;
	d1.day = 4;
	
	d2.year = 2018;
	d2.month = 11;
	d2.day = 22;
	
	printf("%d %d\n", day_of_year(d1), day_of_year(d2));
	printf("%d\n", compare_dates(d1, d2));
	
	return 0;
}

int day_of_year(struct date d)  // d1;
{
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cnt = 0, i = 0;
    
    for (i = 0; i < d.month - 1; i++)   // 10월달 까지의 총 일수합산 구하기
    {
        cnt += month_days[i];
    }

    cnt += d.day;

    /* Check Leap Year */
	if (d.year % 4 == 0)
		if (d.year % 100 != 0 || d.year % 400 == 0)
			cnt += 1;

    return cnt;
}

int compare_dates(struct date d1, struct date d2)
{
    int cnt1, cnt2;

    cnt1 = day_of_year(d1);
    cnt2 = day_of_year(d2);

    if (cnt1 > cnt2)
        return 1;
    else if (cnt2 > cnt2)
        ;
}