#include "holberton.h"
#include <stdio.h>
#include "2-strlen_recursion.c"

/**
 * valida - Funcion para validar palabra
 * @s: Parametro de ingreso de palabra
 * @let: Parametro alto de la palabra
 * @y: Parametro bajo de la palabra
 * Return: 1 if true, 0 if not
 */

int valida(char *s, int let, int y)
{
if (let <= y)
return (1);
if (s[let] != s[y])
return (0);
return (valida(s, let - 1, y + 1));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: parametro de entrada
 * Return: 1 if true, otherwise 0
 */

int is_palindrome(char *s)
{
int let,  x;

if (s[0] == '\0')
return (1);
let = _strlen_recursion(s);
x = valida(s, let - 1, 0);
return (x);
}
