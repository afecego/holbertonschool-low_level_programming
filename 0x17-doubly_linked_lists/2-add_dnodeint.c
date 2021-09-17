#include "lists.h"

/**
 * add_dnodeint - Add nodo at beginning of a list
 * @head: doble pointer
 * @n: date of the new node
 * Return: data of nodes.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo = NULL;

	new_nodo = malloc(sizeof(dlistint_t));

	if (new_nodo == NULL)
	{
		return (NULL);
	}
	new_nodo->n = n;

	if (*head)
	{
		new_nodo->next = *head;
		new_nodo->prev = (*head)->prev;
		(*head)->prev = new_nodo;
		*head = new_nodo;
		return (*head);
	}

	new_nodo->next = *head;
	new_nodo->prev = NULL;
	*head = new_nodo;
	return (*head);
}
