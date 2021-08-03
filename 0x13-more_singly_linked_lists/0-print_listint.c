#include "lists.h"

/**
 * print_listint - check the code
 * @h: constant
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
int i = 0;

if (h == NULL)
{
return(0);
}

while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return(i);
}
