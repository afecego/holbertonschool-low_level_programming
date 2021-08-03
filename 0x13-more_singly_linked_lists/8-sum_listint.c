#include "lists.h"

/**
 * sum_listint - check the code
 * @head: list
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
int acu = 0;

if (head == NULL)
{
return (0);
}

while (head)
{
acu = head->n;
sum += acu;
head = head->next;
}
return (sum);
}
