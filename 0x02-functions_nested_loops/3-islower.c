#include "main.h"
/**
*_islower -print the alphabets in lowercase
*Description: c program print a sentance.
*Return: Always 0 (Success)
*/
int _islower(int c)
{
if (c  <= 97 && c >= 122)
{
return (1);
}
return (0);
}
