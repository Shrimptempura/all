#include <stdio.h>

int str_chr(char *s, int c);
void count_chr(char *s);

int main(void)
{
	char s[100];
	char c;

	printf("문자열을 입력하시오: ");
	gets(s);
	count_chr(s);

    return 0;
}

int str_chr(char *s, int c)
{
	int i, count=0;

	for(i=0; s[i]!=NULL; i++)
    {
		if(s[i]==c)
			count++;
	}

	return count;
}

void count_chr(char *s)
{
	int i;

	for(i='a'; i<='z'; i++)
		printf("%c: %d\n", i, str_chr(s,i));
}