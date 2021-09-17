#include "lists.h"

/**
 * dlistint_len - Print total elements of structur
 * @h: pointer of head
 * Return: number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
