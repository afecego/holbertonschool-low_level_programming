#include <stdio.h>
/**
 * main - Imprimir en hexadecimal
 *
 * Return: (0)
 *
 */

int main(void)
{
char resul[] = "0123456789abcdef";
int hex;
for (hex = 0 ; hex < 16 ; hex++)
putchar(resul[hex]);
putchar('\n');
return (0);
}
