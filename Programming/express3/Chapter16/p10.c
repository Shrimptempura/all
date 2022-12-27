// 암호화 방법 중의 하나는 암호화할 값을 키값과 비트 XOR 연산을 하는 것이다.
// 원래의 값을 복원하려면 다시 비트 XOR 연산을 하면 된다. 이 암호화 방법을 사용하여
// 사용자로부터 문자열을 입력받아서 암호화하고 다시 복호화하는 프로그램 작성
// 다중 소스 파일 형태로 저장..
#include <stdio.h> 
void encode(char *src, char *key, char *result); 
void decode(char *src, char *key, char *result); 

int main(void) 
{ 
    char *key = "12345678"; 
    char *data = "I am a boy"; 
    char result1[100]; 
    char result2[100]; 

    encode(data, key, result1); 
    printf("%s가 %s로 엔코딩됨\n", data, result1); 

    decode(result1, key, result2); 
    printf("%s가 %s로 디코딩됨\n", result1, result2); 

    return 0;
} 

void encode(char *src, char *key, char *result) 
{ 
    while (*src)
    {
        *result++ = *src++ ^ *key++; 
        *result = '\0'; 
    }
} 

void decode(char *src, char *key, char *result) 
{ 
    encode(src, key, result); 
}