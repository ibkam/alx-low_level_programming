#include "lists.h"

/**
 * free_list - free the list
 * @head: pointer to the first node of the list
 */

void free_list(list_t *head)
{
	list_t *current_node;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		current_node = head->next;
		free(head->str);
		free(head);
		head = current_node;
	}
	free(head->str);
	free(head);
}
