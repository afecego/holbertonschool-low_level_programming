#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - check the code for Holberton School students.
 * @s1: String 1
 * @s2: String 2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
int x, y, u;
char *con;

for (x = 0 ; x < s1[x] ; x++)
;
for (y = 0 ; y < s2[y] ; y++)
;

con = malloc((x + y + 1) * sizeof(char));

if (con == NULL)

return (NULL);

for (u = 0; u < x; u++)

con[u] = s1[u];

for (u = 0; u < y; u++)

con[u + x] = s2[u];

con[x + y] = '\0';
return (con);
}
