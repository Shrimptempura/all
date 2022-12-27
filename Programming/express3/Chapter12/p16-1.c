#include <stdio.h>
#include <string.h>

int main(void) 
{
	char s[100];
	int size, i, k;

	puts("광고하고 싶은 텍스트를 입력하시오: ");
	gets(s);

	size = strlen(s);
	puts("======================");

	for (k = 0; k < size; k++) 
    {
		for (i = k; i < (k + size); i++) 
        {
			if (i < size)
                putchar(s[i]); 
            else 
				putchar(s[i - size]);
		}
		putchar('\n');
	}

	return 0;
}

