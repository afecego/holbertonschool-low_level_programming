#include "lists.h"

/**
 * list_len - Count elements from nodos
 * @h: constant
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
