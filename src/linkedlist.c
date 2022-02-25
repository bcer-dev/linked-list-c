#include "linkedlist.h"
#include <stdlib.h>

// This function will act as the constructor for a linked-list
linked_list *create_linked_list()
{
    linked_list *ls = malloc(sizeof(linked_list));
    ls->head = NULL;
    ls->tail = NULL;

    return ls;
}

void add_first(linked_list* ls, int x) 
{
    node *n = malloc(sizeof(node));
    n->value = x;
    n->next = NULL;

    if (ls->head == NULL)
    {
        ls->head = n;
        ls->tail = n;
    }
    else
    {
        n->next = ls->head;
        ls->head = n;
    }
}

void add_last(linked_list *ls, int x)
{
    node *n = malloc(sizeof(node));
    n->value = x;
    n->next = NULL;

    if (ls->head == NULL)
    {
        ls->head = n;
        ls->tail = n;
    }
    else
    {
        ls->tail->next = n;
        ls->tail = n;
    }
}

void remove_first(linked_list *ls)
{
    
}

void remove_last(linked_list *ls)
{
    
}

int index_of(linked_list *ls, int x)
{
    int i = 0;
    for (node *n = ls->head; n != NULL; n = n->next)
    {
        if (n->value == x)
            return i;
        i++;
    }
    return -1;
}

bool has(linked_list *ls, int x)
{
    return index_of(ls, x) != -1;
}

void free_all(linked_list *ls)
{
    while (ls->head != NULL)
    {
        node *tmp = ls->head;
        ls->head = ls->head->next;
        free(tmp);
    }

    free(ls);
}

linked_list *intersection(linked_list *a, linked_list *b)
{
    linked_list *common = create_linked_list();

    for (node *n = a->head; n != NULL; n = n->next)
    {
        if (has(b, n->value))
            add_last(common, n->value);
    }

    return common;
}