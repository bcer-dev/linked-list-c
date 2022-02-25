#include <stdio.h>
#include <stdbool.h>
#include "linkedlist.h"

int main()
{
    linked_list *list = create_linked_list();
    add_last(list, 7);
    add_last(list, 14);
    add_last(list, 9);

    linked_list *list2 = create_linked_list();
    add_last(list2, 8);
    add_first(list2, 9);
    add_first(list2, 14);

    linked_list *list3 = intersection(list, list2);

    for (node *n = list3->head; n != NULL; n = n->next)
    {
        printf("%i\n", n->value);
    }

    free_all(list);
    free_all(list2);
    free_all(list3);
    return 0;
}