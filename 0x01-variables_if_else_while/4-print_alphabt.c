#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase excluding q and e
 * Return: 0
 */
int main(void)
{
	char o;

	for (o = 'a'; o <= 'z'; o++)
	{
		if (o != 'e' && o != 'q')
			putchar(o);
	}

	putchar('\n');

	return (0);
}
