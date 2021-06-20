#include<stdio.h>
#include<string.h>
/**
 * main - Printing combinaciones de digitos
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
if (dig < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
