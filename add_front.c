#include "prac_list.h"

void add_front(Node **head, int data)
{
    Node *new_node = create_node(data);
    if (!new_node)
        return ;
    new_node->next = *head;
    *head = new_node;
}