#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a lists
 * @str: string to assig the node
 * @head: pointer to the head of the linked list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next =NULL;
	else
		new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	*head = new_node;
	return (*head);
}
