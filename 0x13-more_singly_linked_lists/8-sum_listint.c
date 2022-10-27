#include "lists.h"
/**
 * sum_listint - returns the sum of all the data(n)
 * @head: pointer to the first node
 *  Return: sum of all data, 0 if not exist
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while(head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
