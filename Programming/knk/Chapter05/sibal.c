#include <stdio.h>
#include <string.h>

int main(void)
{
    int hour, min, time, i, j, k, small;
    int times[16];
    int arv[16];
    int dep[8];
    char div[8], dib[8];

    printf("Enter a 24-hour time : ");
    scanf("%d:%d", &hour, &min);

    time = hour * 60 + min;
    j = 0;

    printf("Enter the departure time\n");
    for (i = 0; i < 16; i++)
    {
        scanf("%d", &times[i]);
        if (i % 2 == 1)
        {
            dep[j] = times[i - 1] * 60 + times[i];
            j++;
        }
    }

    // getchar();
    // printf("Enter the arrival time\n");
    // for (i = 0; i < 16; i++)
    // {
    //     scanf("%d", &arv[i]);
    // }
    // getchar();

    k = -1;
    small = time - dep[0];
    for (j = 1; j < 8; i++)
    {
        if (small > time - dep[j])
        {
            small = time - dep[j];
            k = j + 1;
        }
    }

    if (k == -1)
        k = 1;

    if (dep[k - 1] < 720)
        strcpy(div, "am");
    else
        strcpy(div, "pm");

    if (arv[j * 2 - 2] * 60 + arv[j * 2 - 1] < 720)
        strcpy(dib, "am");
    else
        strcpy(dib, "pm");

    printf("Closest departure time is %d:%d %s, arriving at %d:%d %s\n", times[j * 2 - 2],
        times[j * 2 - 1], div, arv[j * 2 - 2], arv[j * 2 - 1], dib);

    return 0;
}