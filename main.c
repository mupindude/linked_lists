#include "prac_list.h"

int main()
{
    node_t *head = NULL; //local variable which points to the first item of the list
    head = (node_t *) malloc(sizeof(node_t));
    if (head == NULL)
        return (1);
    head->val = 1;
    head->next = NULL; 
    /* We created the 1st variable in the list (head). We then set the value & the next
    item to be NULL. To add a variable to the end of the list we can just continue 
    advancing to next pointer */
}