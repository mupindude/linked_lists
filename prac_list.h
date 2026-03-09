#ifndef PRAC_LIST_H
#define PRAC_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct  Node
{
    void *data;
    struct  Node *next;  
}   Node;

Node *create_node(int data);
void add_front(Node **head, int data);
void add_back(Node **head, int data);
void print_list(Node *head);
void reverse_list(Node **head);
void remove_value(Node **head, int value);
void free_list(Node **head);
int list_size(Node *head);
void ft_list_remove_if(Node **begin_list, void *data_ref, int (*cmp)());

#endif