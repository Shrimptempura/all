// copy, 3글자 이름 이상 불가 및 오류;
#include <stdio.h>
#include <string.h>

void reverse_name(char *name);

int main(void)
{
    char ch, name[100], *p = name;
    
    printf("Enter a first and last name: ");
    while ((ch = getchar()) != '\n')    // 버퍼에 개행이 남아서 널로 바꿔줌;
        *p++ = ch;
    *p = '\0';
    
    reverse_name(name);
    
    printf("Result: %s\n", name);
    
    return 0;
    
}

void reverse_name(char *name)
{
    char first_ch[2], *p = name;
    
    while (*p == ' ')  // Consume whitespaces before first name
        p++;
    
    strncpy(first_ch, p, 1);   // Save first character of first name
    first_ch[1] = '\0';
    
    while (*p != ' ')  // Consume remaining characters of first name
        p++;
    
    while (*p == ' ')  // Consume white spaces between first name and last name
        p++;            // 현재 p의 위치는 공백인데, 공백임으로 한칸++ 즉 이제 글자인데
                        // if는 왜 안먹을까?
                        // if절 사용시 s1 >= s2까지 출력 가능 s1 < s2일시 trace trap;
                        // if 뿐만 아니라 성이 더 긴 경우에만 돌아감
    
    strcpy(name, p);
    strcat(name, ", ");
    strcat(name, first_ch);
    
    return;
}