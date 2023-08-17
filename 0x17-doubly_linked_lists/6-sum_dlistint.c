#include "lists.h"

/**
*sum_dlistint - returns the sum of all the data
*(n) of a dlistint_t linked list
*@head: the head
*Return: the summation result
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = NULL;

	if (head == NULL)
	return (0);

	current = head;
	while (current->next != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	sum += current->n;
	return (sum);
}
