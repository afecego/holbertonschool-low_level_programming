#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Trae ultimo digito y define si es mayor o menor a 5
 *
 * Return: (0)
 *
 */
int main(void)
{
int n;
int ultDig;

srand(time(0));
n = rand() - RAND_MAX / 2;
ultDig = (n % 10);

if (ultDig > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ultDig);
}
if (ultDig == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ultDig);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultDig);
}
return (0);
}
