#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random()
{
	static int count;
    int number; 

    if (count == 0)
        srand((unsigned int)time(NULL));

    number = rand() % 100 + 1;
    count++;

    return number;
}

int main(void)
{
    int i = 0;

// #if COUNT 0
//     srand((unsigned int)time(NULL));
// #endif

    for (i = 0; i < 10; i++)
        printf("%3d", get_random());
    printf("\n");

    return 0;
}
