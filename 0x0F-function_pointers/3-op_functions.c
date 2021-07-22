#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Funcion de suma
 * @a: Primer variable de entrada para operacion
 * @b: Segunda variable de entrada para operacion
 * Return: 0 if false, something else otherwise.
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Funcion de resta
 * @a: Primer variable de entrada para operacion
 * @b: Segunda variable de entrada para operacion
 * Return: 0 if false, something else otherwise.
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Funcion de multiplicacion
 * @a: Primer variable de entrada para operacion
 * @b: Segunda variable de entrada para operacion
 * Return: 0 if false, something else otherwise.
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Funcion de division
 * @a: Primer variable de entrada para operacion
 * @b: Segunda variable de entrada para operacion
 * Return: 0 if false, something else otherwise.
 */

int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
printf("Error\n");
exit(100);
}

/**
 * op_mod - Funcion de modulo
 * @a: Primer variable de entrada para operacion
 * @b: Segunda variable de entrada para operacion
 * Return: 0 if false, something else otherwise.
 */

int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit(100);
}
