#include "prac_list.h"

void reverse_list(Node **head)
{
    Node *prev = NULL;
    Node *current = *head;
    Node *next;

    if (head == NULL || *head == NULL)
        return;
    current = *head;
    while (current != NULL)
    {
        next = current->next; // save next
        current->next = prev; //reverse pointer
        prev = current; //move prev
        current = next;
    }
    *head = prev;
}