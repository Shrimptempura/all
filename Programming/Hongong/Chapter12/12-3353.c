#include <stdio.h>

int main(void)
{
    char ani[20];
    char why[80];
    printf("좋아하는 동물 : ");
    scanf("%s", ani);
    // add sentence
    // scanf("%*c");  // add sentece quoto
    //fgetc(stdin);       // add sentence queto
    getchar();      // add senten queto
    printf("좋아하는 이유 : ");
    fgets(why, sizeof(why), stdin);
    printf("%s is %s", ani, why);

    return 0;
}

/* 실행결과
좋아하는 동물 : dog(enter)
좋아하는 이유 : very faithful(enter)
dog is very faithful
*/