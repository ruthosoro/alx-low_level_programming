#include "lists.h"

/**
 * dlistint_len -  prints the number of the list elements
 * @h: the list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numberOfNodes = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		numberOfNodes++;
		temp = temp->next;
	}

	return (numberOfNodes);
}
