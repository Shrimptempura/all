#include <stdio.h>
#include <string.h>

int my_str(char *s1, char *s2);

int main(void)
{
    char str1[80], str2[80];

    printf("첫번재 문자열 : ");
    fgets(str1, sizeof(str1), stdin);

    printf("두번째 문자열 : ");
    fgets(str2, sizeof(str2), stdin);

    if (my_str(str1, str2))
        printf("두 문자열은 같습니다.\n");
    else
        printf("두 문자열은 다릅습니다.\n");

    return 0;
}

int my_str(char *s1, char *s2)
{
    if (strcmp(s1, s2) == 0)
        return 1;
    else
        return 0;
}