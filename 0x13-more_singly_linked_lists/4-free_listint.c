#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	
	while (temp->next != NULL)
	{
		temp = head->next;
		free(head);
	}
	free(head);
}
