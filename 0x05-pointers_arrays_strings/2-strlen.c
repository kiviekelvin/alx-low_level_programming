#include "main.h"
/**
 * _strlen - function that returns the length of string
 *
 * @s: a pointer to a character
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
