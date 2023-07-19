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
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar(i * j);
_putchar('\n');
}
}
}
