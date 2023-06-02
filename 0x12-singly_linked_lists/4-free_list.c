#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: takes a pointer to the head of the `list_t` list
 */
void free_list(list_t *head)
{
list_t *current = head;
list_t *next;

while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}

