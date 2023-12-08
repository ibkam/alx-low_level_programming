#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: pointer to the head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
