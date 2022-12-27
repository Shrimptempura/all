// XOR을 이용한 암호화
#include <stdio.h>

int main(void)
{
    char data = 'a';
    char key = 0xff;

    char encrpted_data;
    encrpted_data = data ^ key;

    printf("암호화된 문자 = %c\n", encrpted_data);

    char orig_data;
    orig_data = encrpted_data ^ data;
    printf("원래의 데이터 = %c\n", orig_data);

    return 0;
}