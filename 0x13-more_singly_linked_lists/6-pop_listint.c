#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the first node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
