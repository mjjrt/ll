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

/**
 * @brief Create a node object
 * 
 * @param value with whitch the Node is initialized
 * @return Node* address of the Node
 */
Node* create_node(int value);

/**
 * @brief Append a Node to the end of the List
 * 
 * @param head pointer to head (first object)
 * @param value value to add to the new node
 */
Node* append_node(Node* head, int value);

/**
 * @brief Insert a node before another node
 *
 * @param head
 * @param before
 * @param value
 * */
void insert_node(Node* head, Node* before, int value);

/**
 * @brief Traverse the List, until a value is found
 * 
 * @param head 
 * @param value 
 * @return Node* 
 */
Node* traverse(Node* head, int value);

/**
 * @brief remove a Node node
 * 
 * @param head 
 * @param node the address of the Node to be removed
 */
void remove_node(Node* head, Node* node);

/**
 * @brief Print the list
 * 
 * @param head 
 */
void print_list(Node* head);

/**
 * @brief Deallocate all nodes of the list
 * 
 * @param head 
 */
void free_list(Node* head);

#endif
