#include "lists.h"

/**
* free_dlistint -  frees a dlistint_t list.
* @head: the head
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	dlistint_t *current = NULL;

	if (head == NULL)
	return;

	temp = head;
	current = head;
	while (current->next != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	free(current);
}
