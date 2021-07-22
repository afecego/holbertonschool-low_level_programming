#include "3-calc.h"
/**
 * main - REsultado de operaciones simples.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 or 98 if too few arguments, 99 if wrong operator, 100 if div by 0
 */
int main(int argc, char *argv[])
{
int a, b;
int x;
int (*result)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

result = get_op_func(argv[2]);

if (result == NULL)
{
printf("Error\n");
exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
x = result(a, b);
printf("%d\n", x);
return (0);
}
