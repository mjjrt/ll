#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct node Node;

typedef struct node{
    int data;
    Node* next;
} Node;

Node* create_node(int value);

Node* create_node(int value);

Node* insert_node(Node* head, int value);

Node* traverse(Node* head, int value);

void remove_node(Node* head, Node* node);

void print_tree(Node* head);

void free_tree(Node* head);

#endif