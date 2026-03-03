#include "prac_list.h"

int main()
{
    Node *head = NULL; //local variable which points to the first item of the list
    
    add_front(&head, 1);
    add_front(&head, 3);
    add_back(&head, 5);

    print_list(head);
    free_list(&head);
    return 0;

    /* We created the 1st variable in the list (head). We then set the value & the next
    item to be NULL. To add a variable to the end of the list we can just continue 
    advancing to next pointer */
}