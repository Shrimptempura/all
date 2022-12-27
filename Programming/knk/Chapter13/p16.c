#include <stdio.h>
#define N 100

void reverse(char *message);

int main(void)
{
    char ch, arr[N];
    int i = 0;
    
    printf("Enter a message: ");
    fgets(arr, N, stdin);

    printf("Reversal is: ");
    reverse(arr);
    puts(arr);

    return 0;
}

void reverse(char *message)
{
    char *p = message;
    char ch;

    while (*p) {
        p++;    // p의 위치를 문장끝으로 옮김; reverse를 위해
    }

    while (p-- >= message)
        printf("%c", *p);
    printf("\n");
}

// void reverse(char *message){
// 	char temp, *p = message, *q = message;
	
// 	while(*q) q++;
// 	q--;
	
// 	while(q > p){
// 		temp = *q;
// 		*q = *p;
// 		*p = temp;
// 		q--;
// 		p++;
// 	}
// } 출력은 main문에서 하지만 ㅈㄴ 구려보임 교환성때문에