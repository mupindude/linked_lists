#include "prac_list.h"

int list_size(Node *head)
{
    int i = 0;
    Node *current;
    current = head;
    while (current != NULL)
    {
        current = current->next;
        i++;
    }
    return (i);
}