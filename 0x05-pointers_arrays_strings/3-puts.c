#include "main.h"

/**
 * _puts - entry point.
 * description: prints a string followed by a new line.
 * @str: paramater variable
 * Return: void
 */
void _puts(char *str)
{
	int start;

	start = 0;
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
