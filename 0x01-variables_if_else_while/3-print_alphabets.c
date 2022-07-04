#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: Print the lowercase, uppercase alphabet
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 0; a < 26; a++)
		putchar('a' + a);

	for (a = 0; a < 26; a++)
		putchar('A' + a);

	putchar('\n');

	return (0);
}
