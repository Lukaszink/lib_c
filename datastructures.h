#include <stdio.h>
#include <stdlib.h>

// simple node f
struct libc_node
{
    int value = 0;
    struct libc_node *next;
};

struct libc_list
{
    struct libc_node *start;
    struct libc_node *end;
};

void libc_list_insert_front(int val, struct libc_list *list)
{
    struct libc_node *start = list->start;
    struct libc_node *old_start = start->next;
    struct libc_node *next_node = (struct libc_node *)malloc(sizeof(struct libc_node));
    next_node->value = val;
    next_node->next = old_start;
    start->next = next_node;
};

void libc_list_insert_back(int val, struct libc_list *list)
{
    struct libc_node *end = list->end;
    struct libc_node *next_node = (struct libc_node *)malloc(sizeof(struct libc_node));
    next_node->value = val;
    next_node->next = NULL;
    end->next = next_node;
};
