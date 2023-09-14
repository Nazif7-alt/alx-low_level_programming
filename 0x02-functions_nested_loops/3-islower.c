#include "main.h"

/**
 * _islower -checks for lowercase character
 * Description: Ce fichier cherche les lettres
 * ecrites en minuscules et notifie cela en faisant un retour du nombre un
 * @c:le caractère a acnalyser
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
