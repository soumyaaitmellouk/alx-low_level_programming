#include <stdio.h>
/**
*main - Entry point
*Description: c program print a sentance.
*Return: Always 0 (Success)
*0 is zero 
*/
int main(void)
{
int n =  97;
int m = 65;
for (n = 97 ; n <= 122; n++)
{
putchar(n);
}
for (m = 65 ; m <= 90; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
