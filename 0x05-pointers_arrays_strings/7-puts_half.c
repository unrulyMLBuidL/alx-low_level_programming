#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: param variable type char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int half, len, start;

	start = 0;
	while (str[start] != '\0')
		start++;
	len = start;
	half = len / 2;
	if (len % 2 == 0)
	{
		half = (len - 1) / 2;
	}
	while (++half && str[half] != '\0')
	_putchar(str[half]);
	_putchar('\n');
}
