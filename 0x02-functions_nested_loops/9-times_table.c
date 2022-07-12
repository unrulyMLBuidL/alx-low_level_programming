#include "main.h"

/**
 * times_table - entry point
 * descriptions: prints the 9 times table starting with 0
 * @i: variable
 * @r: variable
 * @n: variable
 * return: void
 */
void times_table(void)
{
	int i , r, n;
	i = 0;

	for (; i <= 9; i++)
	{
	r = 0;
		for (; r <= 9; r++)
		{
		n = i * r;
		if (r == 0)
		{
			_putchar('0');
		}
		else if (n <= 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar((n % 10) + '0');
		}
		else
		_putchar(',');
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
