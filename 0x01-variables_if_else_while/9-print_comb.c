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
	for (; c < 10; )
	{
	putchar(c + '0');
	if (c != 9)
	{
	putchar(',');
	putchar(' ');
	}
	c++;
	}
	putchar('\n');
	return (0);

}
