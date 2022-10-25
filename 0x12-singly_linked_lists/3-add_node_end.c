#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to the first node in the list
 * @str: string to include in the node
 * Return: a pointer to the head of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node;
	list_t *new_node;

	current_node = *head;
	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	return (new_node);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next =new_node;
	return (*head);
}
