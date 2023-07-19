#include "main.h"
/**
* times_table - a function that prints the 9 times table, starting with 0.
*Description: prints the 9 times table, starting with 0.
*Return: nothing
*/
void times_table(void)
{
int i;
int j;
int t;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
t=i * j;
return (t);
_putchar(39);
}
_putchar('\n');
}
}
