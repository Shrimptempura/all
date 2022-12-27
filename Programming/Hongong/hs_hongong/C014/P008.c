#include <stdio.h>
#include <stdlib.h>
struct list {
	int num;
	struct list* next;
};

struct list* insert(struct list *head, int num) {
	struct list* node;
	node = (struct list*)malloc(sizeof(struct list));

	if (node == NULL) {
		printf("메모리 할당 실패\n");
		return head;
	}

	node->num = num;
	if (head == NULL)
		head = node;
	else 
    {
		node->next = head;
		head = node;
	}

	return head;
}
void print_list(struct list *head)
{
    while (head != NULL)
    {
        printf("%5d", head->num);
        head = head->next;
    }
}

int main(void)
{
	struct list *head = NULL;
	int num;
	while (1) 
    {
		printf("정수 입력: ");
		scanf("%d", &num);

		if (num == 0)
			break;
		head = insert(head, num);
	}
	print_list(head);

    return 0;
}
