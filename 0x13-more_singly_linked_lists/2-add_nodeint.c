#include "lists.h"
#include <string.h>

/**
 * add_nodeint - A function that adds a node at the beginning of a new list
 * @head: a pointer to lists_h structure
 * @n: integer data to put into the new node
 * Return: Address of the new element or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
	{
		return (NULL);
	}
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}