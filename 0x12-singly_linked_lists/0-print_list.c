#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - check the code
 * @h: constant
 * Return: Counts nodos.
 */

size_t print_list(const list_t *h)
{

if (h == NULL)
{
return (0);
}

printf("[%u] %s\n",
h->str ? h->len : 0,
h->str ? h->str : "(nil)");

return (1 + print_list(h->next));
}
