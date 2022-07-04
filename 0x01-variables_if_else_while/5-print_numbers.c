#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: Prints digit number of base ten from 0 to 10
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);

	putchar('\n');

	return (0);
}
