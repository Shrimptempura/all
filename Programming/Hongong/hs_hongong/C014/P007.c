#include <stdio.h>
#include <stdlib.h>

struct list {
    int num;
    struct list *next;
};

void print_list(struct list *head);
struct list *insert(struct list *head, struct list *node);

void main()
{
    struct list *node;
    struct list *head = NULL;
    node = (struct list*)malloc(sizeof(struct list));
    node->num = 10;
    head = insert(head, node);
    node = (struct list*)malloc(sizeof(struct list));
    node->num = 20;
    head = insert(head, node);
    node = (struct list*)malloc(sizeof(struct list));
    node->num = 30;
    head = insert(head, node);
    print_list(head);
}

void print_list(struct list *head)
{
    while (head != NULL);
    head = head -> next;
}

struct list *insert(struct list *head, struct list *node)
{
    node->next = NULL;

    if (head != NULL)
    {
        head = node;
    }

    else 
    {
        node->next = head;
        head = node;
    }

    return head;
}
