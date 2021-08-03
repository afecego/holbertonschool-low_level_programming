#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: lists
 * @index: input n nodes
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
{
return (NULL);
}
for (i = 1; i <= index; i++)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);

}
