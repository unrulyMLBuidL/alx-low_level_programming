#include "main.h"

/**
 * DES: Return 1 if ther is uppercase
 */
int _isupper(int c)
{
	char letters = 'A';

	while (letters <= 'Z')
	{
	if (c == letters)
		_putchar('1');
	else
		_putchar('0');
	letters++;
	}
	return (0);
}
