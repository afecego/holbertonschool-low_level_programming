#include "lists.h"

/**
 * pop_listint - check the code
 * @head: list
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
int i;
listint_t *tmp;

if (head == NULL || *head == NULL)
{
return (0);
}

i = (*head)->n;
tmp = (*head);
*head = (*head)->next;
free(tmp);
return (i);

}
