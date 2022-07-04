#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: print lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; --a)
		putchar(a);
	putchar('\n');

	return (0);
}
