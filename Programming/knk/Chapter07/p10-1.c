// 그냥 조건문으로 푼것
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	int cnt = 0;
	
	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n')
    {
		switch (toupper(ch))
        {
			case 'A':case 'E':case 'I':case 'O':case 'U':
				cnt++;
				break;
			default:
				break;
		}
	}
	printf("Your sentence contains %d vowels.\n", cnt);

	return 0;
}