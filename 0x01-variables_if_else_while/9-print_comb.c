#include <stdio.h>

/**
 * main - entry point.
 *
 * DES: Print numbers with comma separation.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;
	for (; c < 10; c++)
	{
	putchar(c + '0');
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);

}
