#include "prac_list.h"

void add_back(Node **head, int data)
{
    Node *new_node = create_node(data);
    Node *temp; 

    if (!new_node)
        return;

    if (*head == NULL)
    {
        *head = new_node;
        return;
    }
    temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}