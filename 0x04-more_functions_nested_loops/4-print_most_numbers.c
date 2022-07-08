#include "main.h"

/**
 * print all numbers from 0 - 9 without 2 & 4
 * return: void
 */

void print_most_numbers(void)
{	
	int i = 0;
	
	while (i <= 9)
	{
	if (i != 2 && i != 4)
	_putchar(i + '0');
	i++;
	}
	_putchar('\n');
	return;
}

