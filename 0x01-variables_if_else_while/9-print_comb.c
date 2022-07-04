#include <stdio.h>

#include <stdlib.h>

/**
 * main - main block
 * Description: ptint all single digit numbersof base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
