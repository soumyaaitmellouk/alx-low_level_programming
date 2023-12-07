#include "lists.h"
/**
 * dlistint_len- returns the number of elements in a linked.
 * @h: parametr
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	int somme = 0;

	if (h == NULL)
		return (somme);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		somme++;
		h = h->next;
	}
	return (somme);
}
