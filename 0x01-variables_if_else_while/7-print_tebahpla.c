#include <stdio.h>
/**
 * main - Print del abecedario al reves
 *
 * Return: (0)
 *
 */
int main(void)
{

char abc;
for (abc = 'z' ; abc >= 'a' ; abc++)

{
putchar(abc);
}
putchar('\n');
return (0);
}
