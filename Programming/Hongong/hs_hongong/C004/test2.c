#include <stdio.h>
#include <string.h>

int str_equal(const char *str1, const char *str2);

int main(void)
{
    char str1[80] = {0, };
    char str2[80] = {0, };

    printf("첫번째 문자열: "); fgets(str1, sizeof(str1), stdin);
    printf("두번째 문자열: "); fgets(str2, sizeof(str2), stdin);

    if (str_equal(str1, str2))
        printf("두 문자열은 같습니다.\n");
    else
        printf("두 문자열은 다릅니다.\n");


    return 0;
}

// int str_equal(const char *str1, const char *str2)
// {
//     if (strcmp(str1, str2) > 0)
//         return 1;
//     else
//         return 0;
// }

int str_equal(const char *str1, const char *str2)
{
    while (*str1 == *str2 && *str1 != '\0')
    {
        str1++;
        str2++;
    }

    if (*str1 == '\n')
        return 1;
    else
        return 0;
}