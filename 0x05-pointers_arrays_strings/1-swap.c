#include "main.h"

/**
 * swap_int - entry point
 * @a: parameter variable
 * @b: parameter variable
 * description: swaps the values of two integers
 * return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
