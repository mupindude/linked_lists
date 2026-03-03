#include "prac_list.h"

Node *create_node(int data)
{
    Node *new_node = malloc(sizeof(Node));

    if (!new_node)
        return (NULL);
    new_node->data = data;
    new_node->next = NULL;
    return (new_node);
}