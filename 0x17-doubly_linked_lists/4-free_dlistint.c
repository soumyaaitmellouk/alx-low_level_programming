#include "lists.h"
/**
 * free_dlistint- that frees a dlistint_t list.
 * @head: parametr
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((h = head) != NULL)
	{
		head = head->next;
		free(h);
	}
}
