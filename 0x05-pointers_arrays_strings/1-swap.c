#include "main.h"
/**
 * swap_int - function that swaps integer values
 *
 * @a: a pointer to an interger
 * @b: a pointer to an integer
 *
 * Return: int
 */
void swap_int(int *a, int *b)
{
	int o;

	o = *a;
	*a = *b;
	*b = o;
}

