// 1 ~ 45 중에 6개의 서로 다른 수를 배열에 입력하고 출력한다.
// 입력한 수가 이미 저장된 수와 같은 에러 메시지 출력하고 다시 입력한다.
#include <stdio.h>

void input_nums(int *lotto_nums);       // 배열에 로또 번호를 입력하는 함수
void print_nums(int *lotto_nums);       // 배열에 저장된 값을 출력하는 함수

int main(void)
{
    int lotto_nums[6];      // 로또 번호를 저장할 배열

    input_nums(lotto_nums);     // 입력 함수 호출
    print_nums(lotto_nums);     // 출력 함수 호출
    
    return 0;
}

void input_nums(int *lotto_nums)
{
    int i, j;
    int num;
    int rerole;
    for(i = 0; i < 6; i++)
    {
        printf("번호 입력 : ");
        scanf("%d", &num);
        rerole = 0;
        for (j = 0; j < i; j++)
        {
            if (num == lotto_nums[j])
            {
                rerole = 1;
                break;      // break문은 가장 가까운 반복문을 탈출
            }               // if절은 반복문이 아님! 고로 밑에 if(!rerole)으로 탈출
        }
        if(!rerole)
        {
            lotto_nums[i] = num;
        }
        else
        {
            printf("같은 번호가 있습니다.\n");
            i--;
        }
    }
}

void print_nums(int *lotto_nums)
{
    int i;

    printf("로또번호 : ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", lotto_nums[i]);
    }
    printf("\n");
}