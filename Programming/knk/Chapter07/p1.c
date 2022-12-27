//short의 최대 크기와 long의 최대 크기를 계산해서 interger type은 몇 비트를 쓰는지 계산 
//short는 16비트 long은 32비트 고로 interger는 32비트 

#include<stdio.h>

int main(void){
	int n;
	long i;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
		printf("%10ld%30ld\n", i, i * i);
        
	return 0;
}