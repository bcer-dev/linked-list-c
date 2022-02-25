# Linked List Implementation in C

Linked lists are a data structure where instead of having elements stored in contiguous memory addresses, each element is a node with a value, and a pointer to the next node.

## Usage

To use the linked list, create a new linked-list:

```c
linked_list *list = create_linked_list();
```

To add elements, you can use either

```c
add_first(list, n);
```

or

```c
add_last(list, n);
```

Where n is an integer.
