#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(void)
{
    int num;
    char word[50];

    printf("Enter a word : ");
	scanf("%s", word);

	num = compute_scrabble_value(word);

    printf("Scrabble value : %d\n", num);

    return 0;
}

int compute_scrabble_value(const char *word)
{
	int i, sum = 0;
	int value[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
					1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	
	while (*word) {
		sum += value[toupper(*word++) - 'A'];
	}

	return sum;
}