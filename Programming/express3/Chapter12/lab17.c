// strstr(); 주어진 문자열 안에 특정한 문자열이 있는지 검색
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "A joy that's shared is a joy made double";
    char sub[] = "";    // NULL;, {NULL};, 이상하게 워밍 및 오류 뜸;
    char *p;
    int loc;

    printf("찾고자 하는 단어를 쓰세요\n");
    scanf("%s", sub);   // gets(sub);

    p = strstr(s, sub);     // joy는 배열에서 s[2]에서 발견되며 따라서 s[2]의 주소인
                    // &s[2]가 반환값으로 반환된다. 따라서 포인터 p는 &s[2]로 대입된다.
    loc = (int)(p - s);     
        // 부분 문자열의 주소에서 전체 문자열의 시작 주소를 빼서 위치를 계산

    if (p != NULL)
        printf("%s에서 첫번째 %s가 %d에서 발견되었음\n", s, sub, loc);
    else
        printf("%s가 발견되지 않았음\n", sub);

    p = strstr(p + 1, sub); // 첫 단어를 s[]에서 찾았다면, p에 찾은 값의 주소가 들어갈
                            // 테니, 다음 인덱스부터 다시 찾아라 의미로 p + 1를 써봄
    loc = (int)(p - s);     

    if (p != NULL)
        printf("%s에서 두번째 %s가 %d에서 발견되었음\n", s, sub, loc);
    else
        printf("%s가 발견되지 않았음\n", sub);

    return 0;
}