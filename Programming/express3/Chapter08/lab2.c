#include <stdio.h>

void happyB(int i);

int main(void)
{
    happyB(5);
    return 0;
}

void happyB(int i)
{
    for (int j = 0; j < i; j++ )
    {
        printf("Happy Good morning\n");
    }
}