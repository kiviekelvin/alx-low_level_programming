#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: print all numbers in base 16 in lower case
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 0; a < 10; a++)
		putchar('0' + a);
	for (a = 'a'; a < 'g'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
