#include "lists.h"

/**
 * list_len - counts the number of nodes in a list
 * @h: pointer to the list
 * Return: the number of nodes in a link list
 */
size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 1; h->next; count++)
		h = h->next;
	return (count);
}
