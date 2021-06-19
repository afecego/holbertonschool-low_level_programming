#include <stdio.h>
/**
 * main - Print del abecedario sin q ni e
 *
 * Return: (0)
 *
 */
int main(void)
{

char abc;

for (abc = 'a' ; abc <= 'z' ; abc++)
{
if ((abc != 'q' && abc != 'e'))
{
putchar(abc);
}
}
putchar('\n');
return (0);
}
