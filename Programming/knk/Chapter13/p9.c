// 그냥 조건문으로 푼것
#include<stdio.h>
#include<ctype.h>

int compute_vowel_count(const char *sentence);

int main(void)
{
	char string[50];
	int cnt;
	
	printf("Enter a sentence: ");
	fgets(string, 50, stdin);

	cnt = compute_vowel_count(string);

	printf("Your sentence contains %d vowels.\n", cnt);

	return 0;
}

int compute_vowel_count(const char *sentence)
{
	int cnt = 0;
	while (*sentence)
	{
		switch (toupper(*sentence++))	// *sentence 랑 35줄 sentence++도 가능
		{
			case 'A':case 'E':case 'I':case 'O':case 'U':
				cnt++;
				break;
			default:
				break;
		}
		// sentence++;
	}

	return cnt;
}