#include "lists.h"

/**
 * sum_dlistint - Sum the values elements of nodos
 * @head: doble pointer
 * Return: result of sum
 */

int sum_dlistint(dlistint_t *head)
{
	int iter = 0, sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		for (; head != NULL; iter++)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);
	}
}
