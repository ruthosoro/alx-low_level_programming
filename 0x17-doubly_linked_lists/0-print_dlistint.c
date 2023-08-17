#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: the list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numberOfNodes = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		/* code */
		printf("%d\n", temp->n);
		numberOfNodes++;
		temp = temp->next;
	}

	return (numberOfNodes);
}
