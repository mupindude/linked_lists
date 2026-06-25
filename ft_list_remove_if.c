#include <stdlib.h>

typedef struct s_list
{
    struct s_list *next;
    void          *data;
} t_list;

void ft_list_remove_if(
    t_list **begin_list,
    void *data_ref,
    int (*cmp)(void *, void *)
)
{
    t_list *current;
    t_list *prev;
    t_list *tmp;

    if (!begin_list || !*begin_list)
        return;

    current = *begin_list;
    prev = NULL;

    while (current)
    {
        if (cmp(current->data, data_ref) == 0)
        {
            tmp = current;

            if (prev == NULL)
                *begin_list = current->next;
            else
                prev->next = current->next;

            current = current->next;
            free(tmp);
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
}
