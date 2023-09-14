#include "main.h"

/**
 * _isalpha - Cheks for alphabetic character
 * Description: Cherche des caracter alphabetique
 * @c: The character to be cheked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
