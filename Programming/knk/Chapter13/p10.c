#include <stdio.h>

void reverse_name(char *name);

int main(void)
{
	char name[50];

    printf("Enter a first and last name : ");
    // fgets(name, 16, stdin);
	gets(name);

	reverse_name(name);

    return 0;
}

void reverse_name(char *name)
{
	char initial;

	while (*name == ' ')
		name++;
	initial = *name;

	while (*name++ != ' ' && *name != '\0')
	// *name++ != ' '을 지우면 무한루프 발생, 아마 ++유무로 보임;
	// 정확하진 않지만 첫 공백에서 걸리고 (&&인데 sp는 이해가능 근데
	// 널은 어디서 걸리는거;; *p 현재 위치 sp, 다음 while문에서 
	// putchar(*name++)에 의해 다음 글자 출력)
		;

	while (*name)  // && *name != '\n') 없어도 돌아감
		putchar(*name++);
	printf(", %c.\n", initial);
}