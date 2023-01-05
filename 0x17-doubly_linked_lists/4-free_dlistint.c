#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: pointer to the head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
