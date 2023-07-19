#include "main.h"
/**
*_islower -print the alphabets in lowercase
*Description: c program print a sentance.
*Return: Always 0 (Success)
*/
int _islower(int c)
{
int m;
if (c  <= 97 && c >= 122)
{
m = _putchar('1');
}
else if (c <= 65 && c >= 90)
{
m = _putchar('0');
}
return (m);
}
