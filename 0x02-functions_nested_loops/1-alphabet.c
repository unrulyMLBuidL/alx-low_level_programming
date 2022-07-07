#include <stdio.h>

/**
 * main - entry point.
 *
 * DES: a function that prints alphabet in lower
 * 	-case
 * 
 * function that prints lower_alpha
 */
char print_alpha(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	putchar('\n');
	return a;
}
