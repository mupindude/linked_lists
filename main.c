#include "prac_list.h"

int main()
{
    Node *head = NULL; //local variable which points to the first item of the list
    int i = 0;

    add_front(&head, 1);
    add_front(&head, 2);
    add_front(&head, 3);
    print_list(head);
    
    i = list_size(head);
    printf("List size is: %d\n", i);
  
    reverse_list(&head);
    printf("reversed:");
    print_list(head);

    free_list(&head);
    return 0;

    /* We created the 1st variable in the list (head). We then set the value & the next
    item to be NULL. To add a variable to the end of the list we can just continue 
    advancing to next pointer */
}