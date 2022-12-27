// 두 개의 텍스트 파일을 서로 비교하는 프로그램을 작성해 보자. 파일의 이름은 사용자에게
// 입력받는다. 두개의 파일이 일치하면 일치함 출력, 일치하지 않으면 일치하지 않는
// 첫 번째 문장을 출력한다.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp, *fp1;
    char name[20];
    char name1[20];
    char buffer[128];
    char buffer1[128];

    printf("첫 번째 파일 이름 : ");
    scanf("%s", name);

    printf("두 번째 파일 이름 : ");
    scanf("%s", name1);

    fp = fopen(name, "r");
    fp1 = fopen(name1, "r");

    if (fp == NULL || fp1 == NULL)
    {
        fprintf(stderr, "파일을 불러 오지 못했습니다.\n");
        exit(EXIT_FAILURE);
    }

    while (1)
    {
        char *p1 = fgets(buffer, 100, fp);
        char *p2 = fgets(buffer1, 100, fp1);
        if (p1 == NULL || p2 == NULL)   // 파일의 끝이 나올때 까지, fgets() 함수가 
            break; // null을 반환할 때 까지 , 읽어 들일 문자열이 더 이상 없을 때 까지
        if (strcmp(buffer, buffer1) != 0)
        {
            printf("<< %s", buffer);
            printf(">> %s", buffer1);
            fclose(fp); fclose(fp1);
            return 0;
        }
    }
    printf("파일은 서로 일치함\n");
    fclose(fp);
    fclose(fp1);

    return 0;
}
// 1) fgets 함수로 파일의 끝까지 읽을때 break 처리.
// 2) 문자열을 알아서 읽어 오면서 \n 까지 읽어오는것.
// 자세히 보면 printf에 따로 \n 개행 문자를 넣지 않았는데, 알아서 문자열이 다음줄에 
// 출력되는걸 볼 수 있습니다. 이걸통해 파일에 \n 개행이 존재하면 그것까지 읽어 오는 것을 
// 알 수 있습니다. 없으면 안가지고 오겠죠. 파일의 끝에는 개행이 없이 파일이 끝났기 
// 때문에 읽어온 문자열에도 개행이 따로 없다는걸 볼 수 있다.