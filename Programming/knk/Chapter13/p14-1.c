// copy
// section 8.16의 anagram인지를 판별하는 프로그램을 함수를 사용해 수정
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_LEN 100

int alpha[26];
bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
	char word1[MAX_LEN + 1], word2[MAX_LEN + 1];
	
	printf("Enter first word: ");
	fgets(word1, 101, stdin);
	
	printf("Enter second word: ");
	fgets(word2, 101, stdin);
	
	if (are_anagrams(word1, word2))
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");
	return 0;
} 

bool are_anagrams(const char *word1, const char *word2)
{
	// char alpha[100] = {0, };
    int *p = alpha;
	
	while (*word1)
    {
		if (isalpha(*word1))
			alpha[tolower(*word1++) - 'a']++;
		else
			word1++;
	}
	while (*word2) {
		if (isalpha(*word2))
			alpha[tolower(*word2++) - 'a']--;
		else
			word2++;
	}
	
	while (p < alpha + 26) {
		if (*p != 0) return false;
		p++;
	}
	
	return true;
}