#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: douuble pointer to the end
 * @n: integer to add to the list
 *
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;
	h = *head;

	if (!head)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (h->next != NULL)
		h = h->next;
	h->next = new;
	return (new);
}
