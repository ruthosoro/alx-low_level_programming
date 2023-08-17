#include "lists.h"

/**
* add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
* @head: the head
* @n: the data
* Return: dlistint_t
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *tail = NULL;

	if (newNode == NULL)
	return (NULL);

	newNode->next = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newNode;
		newNode->prev = tail;

		return (newNode);
	}
}
