#include "main.h"

/**
 * main - entry point.
 *
 * Des: print _putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for ( i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	return (0);

}
