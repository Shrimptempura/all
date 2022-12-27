#include <stdio.h>

int main(void)
{
    char *ps = "applepie";
    ps += 5;            // ps += 5 -> ps = ps + 5
    printf("%s\n", ps);
    
    return 0;
}
/* char 포인터와 char 배열 모두 문자열로 초기화가 가능하나 ps += 5와 같이
ps 값을 바꾸는 것은 포인터만 가능합니다. 배열명은 상수이므로 값을 바꿀수 없다.
*/