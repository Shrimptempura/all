#include <stdio.h>

int main(void)
{
    int ary[][3] = {1,2,2,2,2,2,2,};
    int sum = 0;
    double avg = 0.0;


    for (int i = 0; i < 3; i++)
        for (int j = 0; j < i; j++)
            sum += ary[i][j];

    

    return 0;
}
