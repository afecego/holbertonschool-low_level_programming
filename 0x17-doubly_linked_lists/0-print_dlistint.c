#include "lists.h"

/**
 * print_dlistint - Print elements of structur
 * @h: pointer of head
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
