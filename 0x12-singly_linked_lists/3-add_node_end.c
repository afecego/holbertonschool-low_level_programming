#include "lists.h"
/**
 * add_node_end - agregar nodo al final
 * @head: list link
 * @str: const
 * Return: new_list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_list = malloc(sizeof(list_t));
list_t *list_2 = *head;
int i = 0;

if (new_list == NULL)
return (NULL);

while (str[i])
i++;

new_list->str = strdup(str);
new_list->len = i;
new_list->next = NULL;

if (*head == NULL)
{
*head = new_list;
return (new_list);
}
while (list_2->next != NULL)
{
list_2 = list_2->next;
}

list_2->next = new_list;

return (new_list);
}
