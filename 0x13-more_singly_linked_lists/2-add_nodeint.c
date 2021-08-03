#include "lists.h"

/**
 * add_nodeint - Add nodo to the start
 * @head: Pointer double
 * @n: constant
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *N_nodo;

if (head == NULL || n == 0)
{
return (NULL);
}

N_nodo = malloc(sizeof(listint_t));

if (N_nodo == NULL)
{
return (NULL);
}

N_nodo->n = n;
N_nodo->next = (*head);
(*head) = N_nodo;

return (*head);
}
