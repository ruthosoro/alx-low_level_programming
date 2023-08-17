#include "lists.h"

/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
*@head: the head
*@index: the index of the node, starting from 0
*Return: the dlistint_t
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = NULL;

	if (head == NULL)
	return (NULL);

	current = head;
	for (i = 0; i <= index; i++)
	{
		if (i == index)
		return (current);

		if (current->next != NULL)
		current = current->next;
	}
	return (NULL);
}
