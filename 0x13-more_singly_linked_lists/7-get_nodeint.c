#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the first node
 * @index: index of the node
 *
 * Return: pointer to the indexed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL)
	{
		if (index == 0)
			return (head);
		head = head->next;
		index--;
	}
	return (head);
}
