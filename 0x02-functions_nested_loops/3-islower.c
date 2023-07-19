#include "main.h"
/**
*_islower -print the alphabets in lowercase
*Description: c program print a sentance.
*Return: Always 0 (Success)
*/
int _islower(int c)
{
int  m =0;
if (c  <= 97 && c >= 122)
{
/*return (1);*/
m = _putchar(49);
}
else if (c <= 65 && c >= 90)
{
m = _putchar(48);
}
return (m); 
}
