#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    FILE *fpout = NULL;
    char buffer[1000] = {0};
    char name[1000] = {0};
    int korean, math, english;
    
    fp = fopen("student.txt", "r");
    if( fp == NULL )
    {
        printf("파일 열기 실패\n");
        return 0;
    }

    fpout = fopen("sample1.txt", "w");
    if( fpout == NULL )
    {
        printf("파일 열기 실패\n");
        return 0;
    }

    while(fgets(buffer, 1000, fp) != NULL )
    {
        sscanf(buffer, "%s %d %d %d", name, &korean, &math, &english);
        fprintf(fpout, "%s", name);
        fprintf(fpout, "%10.2f\n", (korean + math + english) / 3.0);
    }

    fclose(fp);
    return 0;
}