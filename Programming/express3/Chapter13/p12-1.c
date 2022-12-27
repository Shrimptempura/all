#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define SIZE 52

typedef struct {
	int value;
	char suit;
} Card;

void init_card(Card pack[], char shape[]);
void print_card(Card pack[], int size);
void shuf_card(Card pack[], int size);

int main(void)
{
	Card pack[SIZE];
	char shape[] = {'c', 'd', 'h', 's'};

	init_card(pack, shape);
	printf("카드가 초기화 되었습니다.\n");

	print_card(pack, SIZE); 
	printf("\n");

	shuf_card(pack, SIZE);
	printf("카드를 섞었습니다.\n");

	print_card(pack, SIZE);
	printf("\n");

    return 0;
}

void init_card(Card pack[], char shape[])
{
	int i, j, count = 0;

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 13; j++) {
			pack[count].value = j + 1;
			pack[count].suit = shape[i];
			count++;
		}
	}
}

void print_card(Card pack[], int size)
{
	int i, j;
	for(i = 0; i < size; i++) {
		printf("%3d%c", pack[i].value, pack[i].suit);
		if((i+1) % 13 == 0)
			printf("\n");
	}
}

void shuf_card(Card pack[], int size)
{
	int i, j;
	srand((unsigned)time(NULL));
	Card temp;

	for(i = 0; i < size-1; i++) {
		j = rand() % (size - i) + i;
		temp = pack[i];
		pack[i] = pack[j];
		pack[j] = temp;
	}
}