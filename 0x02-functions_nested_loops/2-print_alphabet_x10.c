#include "main.h"
/**
 * print_alphabet_x10 - fuction
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;
	int a;

	count = 0;

	while (count < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		count++;
	}
}
