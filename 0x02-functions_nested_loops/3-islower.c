#include "main.h"
/**
*_islower -print the alphabets in lowercase
*Description: c program print a sentance.
*Return: Always 0 (Success)
*/
int _islower(int c)
{
int m;
int i = 48;
int j = 49;
if (c  <= 97 && c >= 122)
{
m = _putchar(j);
}
else if (c <= 65 && c >= 90)
{
m = _putchar(i);
}
return (m);
}
