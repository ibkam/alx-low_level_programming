#include "lists.h"

/**
 * print_list - print all the elements of a list
 * @h: pointer to the linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int j;

	if (h == NULL)
		return (0);

	/*iterate through list*/
	for (j = 1; h->next; j++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (j);
}
