#include "main.h"


/**
 * main - entry point.
 *
 * DES: a function that prints alphabet in lower
 * 	-case
 * Return: void
 * function that prints lower_alpha
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
