#include "main.h"

/**
 * puts2 - prints the first char then every other char.
 * @str: param variable type char
 *
 * Return: void
 */
void puts2(char *str)
{
	int start;

	for (start = 0; str[start] != '\0'; )
	{
		_putchar(str[start]);
		start++;
		start++;
	}
	_putchar('\n');
}
