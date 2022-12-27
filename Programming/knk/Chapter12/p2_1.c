// 다른 버젼 copy
#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main(void)
{
	char c, word[MAX] = {0}, *p, *q;
	int len;
	p = word;

	while ((c = getchar()) !='\n')
    {
		if (isalpha(c))
			*p++ = tolower(c);
	}
	p--;
	len = p - word;

	for (q = word; q < p; p--, q++)
    {
		if (*q != *p)
        {
			printf("Not a palindrome\n");
			return 0;
		}
	}
	printf("Palindrome\n");
	return 0;
} 