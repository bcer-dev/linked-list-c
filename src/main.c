#include <stdio.h>
#include <stdbool.h>
#include "linkedlist.h"

int main()
{
    linked_list *list = create_linked_list();
    add_last(list, 7);
    remove_first(list);

    for (node *n = list->head; n != NULL; n = n->next)
    {
        printf("%i\n", n->value);
    }

    free_all(list);
    return 0;
}