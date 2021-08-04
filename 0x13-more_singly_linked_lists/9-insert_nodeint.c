#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: list
 * @idx: Index de los nodos
 * @n: Dato a ingresar en el Nodo
 * Return: New nodo
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *old, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		old = *head;
		for (i = 0; i < idx - 1 && old != NULL; i++)
		{
			old = old->next;
		}
		if (old == NULL)
		{
			return (NULL);
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = old->next;
	old->next = new;
	return (new);
}
