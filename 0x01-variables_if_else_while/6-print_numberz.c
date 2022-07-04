#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: print all single digit numbers from 1 to 10
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar('0' + a);

	putchar('\n');

	return (0);
}
