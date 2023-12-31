#include "lists.h"
/**
 * print_dlistint- prints all the elements of linked list.
 * @h: paramert
 * Return: number of element.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int somme = 0;

	if (h == NULL)
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
}
