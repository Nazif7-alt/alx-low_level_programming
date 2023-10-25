#include "lists.h"

/**
 * print_listint - Affiche les éléments d'une liste chaînée de type listint_t.
 * @h: Pointeur vers le premier élément de la liste.
 *
 * Return: Le nombre d'éléments dans la liste.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
<<<<<<< HEAD
		printf("%d\n", current->n);
		current = current->next;
=======
	printf("%d\n", current->n);
	current = current->next;
>>>>>>> e3656950b63dcdb7588ce696cf4b26d3208b6a60
		count++;
	}

	return (count);
}
