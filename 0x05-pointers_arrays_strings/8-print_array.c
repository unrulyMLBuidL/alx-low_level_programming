#include "main.h"

/**
 * print_array - prints n elements of an arrays of int.
 * @a: param variable storing array name.
 * @n: param variable for number of elements in a.
 * return: void
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
	if (a[n -1] == a[count])
		printf("%d", a[n - 1]);
	else
	printf("%d, ", a[count]);
	}
	printf("\n");
}
