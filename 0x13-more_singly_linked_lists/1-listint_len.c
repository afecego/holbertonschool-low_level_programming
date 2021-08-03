#include "lists.h"

/**
 * listint_len - function send count elements structur
 * @h: constant
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
int i = 0;

if (h == NULL)
{
return (0);
}

while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
