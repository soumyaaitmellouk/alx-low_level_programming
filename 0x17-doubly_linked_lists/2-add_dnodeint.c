#includ "lists.h"
/**
 * add_dnodeint- adds a new node at the beginning
 * @head: parameter 1.
 * @n: parameter 2
 * Return: adress of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}
	new->next = temp;
	if (temp != NULL)
		temp->prev = new;

	*head = new;

	return (new);
}	
