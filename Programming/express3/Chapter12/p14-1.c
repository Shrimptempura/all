#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];       // 처음 입력한 문자열
	char word1[10];     // 찾을 문자열
	char word2[10];     // 바꿀 문자열
	char *token;
	char *str2[80];     // 토큰값을 포인터배열에 저장
	int i, count = 0;

	printf("문자열을 입력하시오(최대 80자): ");
	fgets(str, sizeof(str), stdin);     // fgets -> 개행 가져오고, 뒤에 널을 추가 붙임
	str[strlen(str) -1] = NULL;         // gets -> 개행 가져오고, 개행을 널로 바꿈

	printf("찾을 문자열: ");
	fgets(word1, sizeof(word1), stdin);
	word1[strlen(word1) -1] = NULL;     // 그래서 이렇게 널을 지정해야함, 아니면 쓰레기임

	printf("바꿀 문자열: ");
	fgets(word2, sizeof(word2), stdin);
	word2[strlen(word2) -1] = NULL;

	token = strtok(str, " ");
	for(i = 0; token!=NULL; i++)
    {
		str2[i] = token;
		token = strtok(NULL, " ");
		count++;
	} 
	for(i = 0; i<count; i++)
		if(strcmp(word1, str2[i])==0)
			str2[i] = word2;

	printf("결과: ");
	for(i = 0; i < count; i++)
		printf("%s ", str2[i]);
}

