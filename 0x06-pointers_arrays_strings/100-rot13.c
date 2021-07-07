/**
 * rot13 - check the code for Holberton School students.
 * @l: Parametro necesario para la funcion
 * Return: Always 0.
 */

char *rot13(char *l)
{
int x, y, men;
char let[] = "ANBOCPDQERFSGTHUIVJWKXLYMZanbocpdqerfsgthuivjwkxlymz";

x = 0;
y = 0;
men = -1;

for (x = 0; l[x]; x++)
{
men = 1;
for (y = 0; l[x] != let[y] && y < 52; y++)
men = (men * -1);
if (l[x] == let[y])
l[x] = (l[x] + (13 * men));
}
return (l);
}
