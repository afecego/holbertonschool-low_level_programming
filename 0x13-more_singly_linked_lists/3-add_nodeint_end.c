#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: Pointer double
 * @n: constant
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ending;
listint_t *tmp;

if (head == NULL)
{
return (NULL);
}
ending = malloc(sizeof(listint_t));

if (ending == NULL)
{
return (NULL);
}

ending->n = n;
ending->next = NULL;

if (*head == NULL)
{
*head = ending;
return (ending);
}

tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = ending;
return (tmp);
}
