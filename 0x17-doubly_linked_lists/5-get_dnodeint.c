#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: like all it take you to head of the list
 * Nazif7-alt
 * @index: index of the node to search for, starting from 0
 * Return: it will give nth node or null to
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
