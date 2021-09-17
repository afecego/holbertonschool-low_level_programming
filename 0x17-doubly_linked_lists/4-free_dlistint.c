#include "lists.h"

/**
 * free_dlistint - Free
 * @head: pointer
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *temp = NULL;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
