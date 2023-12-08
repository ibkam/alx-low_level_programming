#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node
 * @head: the head node
 * @index: the index of the node to return
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NUll)
			return (NULL);
		head = head->next;
	}
	return (head)
}
