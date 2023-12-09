#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * Nazif7-alt works
 * @head: taking to the  head of the list
 * Return: nada
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
