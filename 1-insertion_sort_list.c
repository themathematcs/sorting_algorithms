#include "sort.h"

/**
 *insertion_sort_list - sort doblinked list in asending
 *@list: double ptr to the head of linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *insert_node, *next_insert;

	if (list == NULL || *list == NULL)
		return;
	insert_node = (*list)->next;
	while (insert_node != NULL)
	{
		next_insert = insert_node->next;
		while (insert_node->prev != NULL && insert_node->prev->n > insert_node->n)
		{
			insert_node->prev->next = insert_node->next;
			if (insert_node->next != NULL)
				insert_node->next->prev = insert_node->prev;
			insert_node->next = insert_node->prev;
			insert_node->prev = insert_node->next->prev;
			insert_node->next->prev = insert_node;
			if (insert_node->prev == NULL)
				*list = insert_node;
			else
				insert_node->prev->next = insert_node;
			print_list(*list);
		}
		insert_node = next_insert;
	}
}
