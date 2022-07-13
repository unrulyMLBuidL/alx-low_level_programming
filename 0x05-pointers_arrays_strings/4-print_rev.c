#include "main.h"

/**
 * print_rev - entry point
 * description: prints a string in reverse.
 * @s: parameter variable type char *.
 * Return: void
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count])
		count++;
	while (count--)
		_putchar(s[count]);
	_putchar('\n');
}
