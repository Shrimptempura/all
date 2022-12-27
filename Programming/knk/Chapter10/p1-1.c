//section 10.2의 스택 예시 프로그램을 이용해서 중괄호, 괄호가 서로 대칭이 되는지 확인
// stack, copy2;
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

char content[STACK_SIZE];
int top = 0;

void stack_overflow(void);
void stack_underflow(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);

int main(void) 
{
	char c;
	
	printf("Enter parentheses and/or braces: ");
	while ((c = getchar()) != '\n') 
    {
		if (c == '{' || c == '(')
			push(c);
		else if (c == '}' && pop() != '{') {
			printf("Parentheses/braces are not nested properly.\n");
			return 0;
		}
		else if(c == ')' && pop() != '(') {
			printf("Parentheses/braces are not nested properly.\n");
			return 0;
		}
	}
	
	if (is_empty())
		printf("Parentheses/braces are nested properly.\n");
	else
		printf("Parentheses/braces are not nested properly.\n");
		
	return 0;
}

void make_empty(void) {
	top = 0;
}

bool is_empty(void) {
	return top == 0;
}

bool is_full(void) {
	return top == STACK_SIZE;
}

void push(char i) {
	if (is_full())
		stack_overflow();
	else
		content[top++] = i;
}

char pop(void) 
{
	if (is_empty())
		stack_underflow();
	else
		return content[--top];
}

void stack_overflow(void) {
	printf("STACK OVERFLOW!\n");
	exit(1);
}

void stack_underflow(void) {
	printf("STACK UNDERFLOW!\n");
	exit(1);
}