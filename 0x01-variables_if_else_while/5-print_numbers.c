#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: print all single digits of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);

}
