#include "lists.h"

/**
 * add_dnodeint_end - Add nodo at end of a list
 * @head: doble pointer
 * @n: date of the new node
 * Return: data of nodes.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *current = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head)
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
		return (new_node);
	}
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
