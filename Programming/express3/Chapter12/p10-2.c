#include <stdio.h>
#include <string.h>

int main(void) 
{
	char s[100];
	int i, len;

	printf("문자열 입력");
	scanf("%s", s);

	len = strlen(s);

	for (i = 0; i < (len / 2); i++)
    {
	if( s[i] != s[len -i -1] ) 
		printf("회문이 아님");
	printf("회문임");
    }
	return 0;

}

