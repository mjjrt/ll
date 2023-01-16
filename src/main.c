#include "linked_list.h"

int main(void)
{
    Node* head = NULL;
    
    for (size_t i = 0; i < 10; i++)
    {
        head = append_node(head, i);
		// printf("%p\n", head);
	}
    
    print_list(head);

    Node* five = traverse(head, 5);
    remove_node(head, five);

	Node* seven = traverse(head, 7);
	insert_node(head, seven, 19);
    print_list(head);

    free_list(head);

    return 0;
}
