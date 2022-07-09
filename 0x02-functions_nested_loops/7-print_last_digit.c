#include "main.h"

/**
 * print_last_digit - Entry point.
 * @i: interger value.
 * @x: variable
 * Description: Prints the last digit of a number.
 * Return: int
 */
int print_last_digit(int i)
{
	int x = i % 10;

	if (i < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
