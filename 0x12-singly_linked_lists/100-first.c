#include <stdio.h>

void imprimir(void) __attribute__ ((constructor));
/**
* imprimir - Print text
*
* Return: Nothing.
*/
void imprimir(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
