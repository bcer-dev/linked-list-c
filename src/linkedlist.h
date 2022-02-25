#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

typedef struct
{
    node *head;
    node *tail;
} linked_list;

linked_list *create_linked_list();
void add_first(linked_list* ls, int x);
void add_last(linked_list* ls, int x);
void remove_first(linked_list *ls);
void remove_last(linked_list *ls);
int index_of(linked_list* ls, int x);
bool has(linked_list* ls, int x);
void free_all(linked_list *ls);
linked_list *intersection(linked_list *a, linked_list *b);