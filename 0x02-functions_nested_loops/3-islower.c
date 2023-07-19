#include "main.h"
/**
*print_alphabet -print the alphabets in lowercase
*Description: c program print a sentance.
*Return: Always 0 (Success)
*/
int _islower(int c)
{

if (c  <= 97 && c >= 122)
{
return (1);
}
else if (c <= 65 && c >= 90)
{
return (0);
}
_putchar('\n');
}
