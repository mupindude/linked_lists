#include "prac_list.h"

void print_list(Node *head)
{
    while (head != NULL)
    {
        printf("%s ->", (char *)head->data);
        head = head->next;
    }
    printf("NULL\n");
}