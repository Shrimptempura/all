#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE    *fp;
    char    fname[100];
    int        number;
    int        count;
    char    name[20];
    float    score;
    float    total;

    count = 0;
    total = 0.0;
    printf("Enter file: ");
    scanf("%s", fname);

    if ((fp = fopen(fname, "w")) == NULL)
    {
        fprintf(stderr, "can't open %s\n", fname);
        exit(1);
    }

    while (1)
    {
        printf("Enter information(if - end)\n");
        scanf("%d", &number);
        if (number < 0)
            break;
        scanf("%s %f", name, &score);
        fprintf(fp, " %d %s %f", number, name, score);
    }
    fclose(fp);

    if ((fp = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "can't open %s\n", fname);
        exit(1);
    }

    while (1)
    {
        fscanf(fp, "%d %s %f", &number, name, &score);
        total += score;
        count++;
        if (feof(fp))
            break;
    }

    printf("average = %.2f\n", total / count);
    fclose(fp);

    return (0);
}