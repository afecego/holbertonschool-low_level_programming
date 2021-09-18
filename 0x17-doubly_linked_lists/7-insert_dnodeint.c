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
	dlistint_t *current = NULL, *Newnodo = NULL;
	unsigned int length = 0, i = 0;

	if (*h == NULL)
		return (NULL);

	length = dlistint_len(*h);
	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	else if (length == idx)
		return (add_dnodeint_end(h, n));

	current = *h;
	while (current != NULL)
	{
		if (i == idx)
		{
			Newnodo = createNode(n, current, current->prev);
			current->prev = Newnodo;
			current = Newnodo;
			current->prev->next = Newnodo;
			return (Newnodo);
		}
		current = current->next;
		++i;
	}
	return (current);
}

/**
 * dlistint_len - Print total elements of structur
 * @h: pointer of head
 * Return: number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int length;

	for (length = 0; h != NULL; length++)
	{
		h = h->next;
	}
	return (length);
}

/**
 * createNode - Creat new node
 * @n: Date of de new node
 * @next: Next of de new node
 * @prev: Previos of the new node
 * Return: new node.
 */

dlistint_t *createNode(unsigned int n, void *next, void *prev)
{
	dlistint_t *Newnodo = malloc(sizeof(dlistint_t));

	if (Newnodo == NULL)
		return (NULL);

	Newnodo->n = n;
	Newnodo->next = next;
	Newnodo->prev = prev;
	return (Newnodo);
}
