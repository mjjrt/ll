#include "linked_list.h"

Node* create_node(int value)
{
    Node* n = malloc(sizeof(Node));
    
    if(n == NULL){
        fprintf(stderr, "Could not allocate node: %s\n", strerror(errno));
        exit(1);
    }
    
    n->data = value;
    n->next = NULL;
    
    return n;
}

Node* insert_node(Node* head, int value)
{
    Node* p;
    Node* tmp = create_node(value);
    
    if(head == NULL)
    {
        head = tmp;
    }else{
        p = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = tmp;
    }
    return head;
}

Node* traverse(Node* head, int value)
{
    Node* p = head;
    while(p->next != NULL && p->data != value){
        p = p->next;
    }
    printf("Found data %d at node %p\n", value, p);
    return p;
}

void remove_node(Node* head, Node* node)
{
    Node* p = head;

    while(p->next != node){
        p = p->next;
    }

    p->next = node->next;

    free(node);
}

void print_tree(Node* head)
{
    Node* p = head;
    if(p->next == NULL){
        printf("Empty List\n");
    }else{
        while(p != NULL){
            printf("%d\n", p->data);
            p = p->next;
        }
    }
}

void free_tree(Node* head)
{
    Node* p = head;
    Node* f;
    while(p->next != NULL){
        f = p;
        free(f);
        p = p->next;
    }
    free(p);
}