#include <stdio.h>
#include <stdlib.h>

struct list {
	int num;
	struct list* next;
};

void print_list(struct list* head);

void main()
{
	struct list a, b, c;
	struct list* head;

	a.num = 10; 
	b.num = 20;
	c.num = 30;

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	head = &a;

	print_list(head);
}

void print_list(struct list *head)
{
    while (head != NULL)
    {
        printf("5d", head -> num);
        head = head -> next;
    }
}
