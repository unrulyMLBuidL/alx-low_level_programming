#include "main.h"


/**
 * function that prints alphabet in lower-case.
 * @a: char variable
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
