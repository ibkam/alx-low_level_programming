#include "lists.h"
/**
 * listint_len - return the number of elements in a list
 * @h: pointer to the first node
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
