#include "prac_list.h"

void remove_value(Node **head, void *data)
{
    Node *temp = *head;
    Node *prev = NULL;

    while(temp != NULL)
    {
        if (temp->data == data)
        {
            if (prev == NULL)
                *head = temp->next;
            else
                prev->next = temp->next;
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}