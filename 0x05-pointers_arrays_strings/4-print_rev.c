#include "main.h"
/**
 * print_rev - function
 *
 * @s: pointer to a char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}

