#include "main.h"

/**
 * swap_int - entry point
 * @a: parameter variable
 * @b: parameter variable
 * @n: varaible.
 * description: swaps the values of two integers
 * return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
