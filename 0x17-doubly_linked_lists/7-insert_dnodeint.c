#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert nodo at index
 * @h: doble pointer
 * @idx: index where insert node
 * @n: Date of new nodo
 * Return: result of sum
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *old, *new;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		old = *h;
		for (i = 0; i < idx - 1 && old != NULL; i++)
		{
			old = old->next;
		}
		if (old == NULL)
		{
			return (NULL);
		}
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	new->next = old->next;
	old->next = new;
	return (new);
}
