#include "lists.h"

/**
*insert_dnodeint_at_index - inserts a new node at a given position.
*@h: the node
*@idx: the index
*@n: the node n value
*Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newWnode = NULL;
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (h == NULL)
	return (NULL);

	newWnode = malloc(sizeof(dlistint_t));
	if (newWnode == NULL)
	return (NULL);
	newWnode->n = n;
	current = *h;
	if (idx == 0)
	{
		newWnode->prev = NULL;
		newWnode->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newWnode;
		}
		*h = newWnode;
		return (newWnode);
	}
	while (current != NULL)
	{
		if (i == idx)
		{
			newWnode->next = current;
			newWnode->prev = current->prev;
			current->prev->next = newWnode;
			current->prev = newWnode;
			return (newWnode);
		}
		else
		{
			current = current->next;
			i++;
		}
	}
	return (NULL);
}
