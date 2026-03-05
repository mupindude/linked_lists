#include "prac_list.h"

void remove_value(Node **head, int value)
{
    Node *temp = *head;
    Node *prev = NULL;

    while(temp != NULL)
    {
        if (temp->data == value)
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