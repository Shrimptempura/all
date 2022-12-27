#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade : ");
    scanf("%d", &grade);

    if (grade >= 0 && grade <= 100)
    {
        grade /= 10;
        switch (grade)
        {
            case 9: case 10:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }
        printf("Letter grade : %c\n", grade);
    }
    else
        printf("error, enter the 0 - 100 grade\n");

    return 0;
}