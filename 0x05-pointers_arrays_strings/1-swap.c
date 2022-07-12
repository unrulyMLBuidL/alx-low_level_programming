#include "main.h"

/**
 * swap_int - entry point
 * @a: parameter variable
 * @b: parameter variable
 * @n: int variable
 * @p: int variable
 * description: swaps the values of two integers
 * return: void
 */
void swap_int(int *a, int *b)
{
	int n;
	int p;

	n = *a;
	p = *b;

	*a = p;
	*b = n;
}
