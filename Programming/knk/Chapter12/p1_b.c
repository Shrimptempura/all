#include <stdio.h>
#define N 100

int get_message(char *message, int n);
void reverse_message(char *message, int n);

int main(void)
{
	char message[N];
	
	int n = get_message(message, N);

	reverse_message(message, n);

	printf("Reversal is: ");
	for (char *p = message+2; p <= message + n; p++) // Taking it from 2, because the /n character was being printed otherwise.
		printf("%c", *p);

	printf("\n\n");

	return 0;

}

int get_message(char *message, int n)
{
	int i = 0; 

	printf("Enter a message: ");

	for (char *p = message; p < message + n; p++)
	{
		*p = getchar();
		i++;

		if (*p == '\n')
			return i;
	}

	return i;
}

void reverse_message(char *message, int n)
{
	char swap;
	char *i = message; char *j = message + n;

	while (i < j)
	{
		swap = *i;
		*i++ = *j;
		*j-- = swap;
	}

	return; 
}