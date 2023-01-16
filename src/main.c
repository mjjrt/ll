#include "linked_list.h"

int main(void)
{
    Node* head = NULL;
    
    for (size_t i = 0; i < 10; i++)
    {
        head = insert_node(head, i);
    }
    
    print_tree(head);

    Node* five = traverse(head, 5);
    remove_node(head, five);

    print_list(head);

    free_list(head);

    return 0;
}