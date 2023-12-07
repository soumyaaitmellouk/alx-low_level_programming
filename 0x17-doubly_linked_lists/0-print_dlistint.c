#include "list.h"
size_t print_dlistint(const dlistint_t *h);
{
	int somme = 0;

	if (h == Null)
		return (somme);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		somme++;
		h = h->next;
	}
	return (somme);
