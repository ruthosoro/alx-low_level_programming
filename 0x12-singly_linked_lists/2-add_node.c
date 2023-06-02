#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: takes in a pointer to a pointer to the head of a linked list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL) /*Initialzes the next pointer to NULL*/
		new_node->next = NULL;
	else /*Moves the new node to the head*/
	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	*head = new_node;
	return (*head);
}
