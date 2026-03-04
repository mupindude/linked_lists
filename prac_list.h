#ifndef PRAC_LIST_H
#define PRAC_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct  Node
{
    int data;
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

#endif