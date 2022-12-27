#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[100];
	char *word[100]; // 배열이 아니라 포인터배열이여야만 여러글자를 한 칸에 넣을 수 있다.
                    // 주소지(여기서는 token)를 가르키는 방법으로 && 저장될 곳을 미리 
                    // 할당해주어야 한다.
	char *token;
	int i, count = 0;

	printf("문자열을 입력하시오: ");
	fgets(str, sizeof(str), stdin);

	str[strlen(str)-1] = NULL;    // 남은 빈칸에 쓰레기값이 들어가는 것을 방지함
	token = strtok(str, " ");

	for(i = 0; token != NULL; i++)
    {
		word[i] = token;        // 문자열에서 찾은 마지막 토큰의 주소값을 리턴하며 토큰이 
                                // 더이상 없다면 NULL 포인터를 리턴한다. 
		token = strtok(NULL, " ");
		count++;
	}

	printf("출력문자열: ");
	for(i = 0; i < count; i++)
    {
		printf("%s ", word[count -i -1]);
	} 

    return 0;
}



// 비고) scanf함수는 공백, \t, \n이 오기 전까지의 의미있는 값들을 받는 함수이다. 
// 즉 중간에 띄어쓰기가 있다면 scanf는 띄어쓰기가 포함된 모든 문자열을 입력값으로 받는 
// 것이 아니라 첫번째 띄어쓰기 전까지의 입력값만을 받고 나머지는 버퍼stdin에 저장된다. 
// 문제에서 요구하는 '엔터키가 눌려질 때까지 사용자로부터 문자열을 입력받아서' 라는 
// 문장의 의미는 \n이 오기 전까지 공백과 \t이 포함된 문자열을 받는 fgets함수를 
// 사용하라는 의미이다.  scanf함수의 복잡성을 알지 못한다면 다소 이해하기 어려운 
// 문제이다.

// 기본형식: char *fgets(char *str, int num, FILE*stream);

//  scanf 함수의 앞부분을 생략하는 것처럼 처음의 char * 은 보통 생략한다. 
// 첫 번째 인자는 저장할 배열을 의미한다. 두 번째 인자는 마지막 NULL문자를 포함하여 
// 읽어들일 문자의 수를 의미한다. 세 번째 인자는 문자열을 받아들일 스트림의 FILE 객체를 
// 가르키는 포인터이다. 보통 표준입력에서 입력을 받기때문에 대개 stdin을 쓴다.

// 성공적으로 읽어드렸다면 함수는 str을 반환하고 오류가 발생하거나 아무것도 읽어드리지 
// 못했다면 NULL 포인터를 반환한다.

