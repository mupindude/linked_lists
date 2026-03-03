#include "prac_list.h"

void free_list(Node **head)
{
    Node *temp;

    if (head == NULL || *head == NULL)
        return;
    while (head != NULL)
    {
        temp = *head; //stores current head node
        *head = (*head)->next; //move head forward
        free(temp);
    }
    *head = NULL;
}