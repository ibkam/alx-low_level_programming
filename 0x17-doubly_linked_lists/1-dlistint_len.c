#include "lists.h"

/**
 * dlistint_len - a function that returns the length of the linked list
 * @h: the head node
 * Return: the number of element in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return count;
}
