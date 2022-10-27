#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the first node
 * @index: the position of nth node 
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;

	if (index == 0 && head)
		return (head);

	for (p = 0;  p < index; p++)
		head = head->next;
	if (head)
		return (head);
	return (NULL);
}
