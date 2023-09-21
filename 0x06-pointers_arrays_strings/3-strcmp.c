#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be comparad.
 * @s2: A pointer to the second string to be comparad.
 * Return: If str1 < str2, the negative diffence of the unmatched characters.
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the unmatched characters.
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
