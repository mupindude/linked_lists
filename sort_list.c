#include "prac_list.h"

void sort_list(Node **head, void (*cmp)(void *, void *))
{
    Node *i;
    Node *j;
    void *tmp;

    if (!head || !*head)
        return;
    i = *head;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if (cmp(i->data, j->data) > 0)
            {
                tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
            j = j->next;
        }
        i = i->next;
    }
}

static int cmp_int(void *a, void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    return(x - y);
}