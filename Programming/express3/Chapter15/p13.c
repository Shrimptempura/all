#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp1, *fp2;
    char file1[100], file2[100];
    char buffer[100];
    int count = 0;
    
    printf("파일 이름:  ");
    scanf("%s", file1); 
    
    printf("파일 이름:  ");
    scanf("%s", file2); 
    
    // 첫번째 파일을 읽기 모드로 연다.
    if( (fp1 = fopen(file1, "r")) == NULL )
    {
        fprintf(stderr,"파일 %s을 열 수 없습니다.\n", file1);
        exit(1);
    }
    
    // 두번째 파일을 쓰기 모드로 연다.
    if( (fp2 = fopen(file2, "w")) == NULL )
    {
        fprintf(stderr,"파일 %s을 열 수 없습니다.\n", file2);
        exit(1);
    }
    
    // 첫번째 파일을 두번째 파일로 복사한다.
    while( fgets(buffer, 100, fp1) != NULL ) 
    {
        char *pos = strtok(buffer, " ");
        while(pos != NULL) 
        {
            if (strcmp("Android" , pos) == 0)
            { 
                count++;
                if (count < 2)
                    fprintf(fp2, "안드로이드 ");
                else if (count >= 2)
                {
                    fprintf(fp2, "%s ", pos);
                    // pos = strtok(NULL, " ");
                }
            }
            else 
                fprintf(fp2, "%s ", pos); 
            pos = strtok(NULL, " ");
        }
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}