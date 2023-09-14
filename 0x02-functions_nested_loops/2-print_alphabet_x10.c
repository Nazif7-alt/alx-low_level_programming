#include "main.h"

/**
 * print_alphabet_x10 - Imprime l'alphabet en minuscules 10 fois.
 *
 * Description : Cette fonction imprime l'alphabet en minuscules dix fois,
 * en sautant une ligne à chaque fois.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
