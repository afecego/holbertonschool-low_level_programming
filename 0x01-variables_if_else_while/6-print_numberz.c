#include <stdio.h>
/**
 * main - Print numeros de un solo digito
 *
 * Return: (0)
 *
 */
int main(void)
{

int dig;
for (dig = '0' ; dig <= '9' ; dig++)
{
putchar(dig);
}
putchar('\n');
return (0);
}
