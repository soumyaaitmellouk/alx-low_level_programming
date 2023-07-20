#include <stdio.h>
#include "main.h"
/**
*print_to_98 - afficher les nombres jusqu'à 98.
*@n :number 1 
*Return:the result.
*/
void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ",n);
n++;
}
while (n > 98)
{
printf("%d, ",n);
n--;
}
if ( n == 98)
{
printf("%d",n);
}
}
