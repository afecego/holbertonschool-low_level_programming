#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free the list
 * @head: temporal
 * Return: Always 0.
 */

void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
