#include "lists.h"

/**
 * get_dnodeint_at_index - Add nodo copy at end of a list
 * @head: doble pointer
 * @index: Ubication of element to copy
 * Return: element to return
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iter = 0;
	dlistint_t *current = head;

	if (head)
	{
		while (current)
		{
			if (iter == index)
			{
				return (current);
			}
			current = current->next;
			iter++;
		}
	}
	return (NULL);
}
