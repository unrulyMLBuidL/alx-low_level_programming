#include <stdio.h>

/** 
 * main - entry point.
 *
 * DES: print values of base 16 from 0 in low_case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
	putchar(b + '0');
	}
	for (a = 'a'; a < 'g'; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return 0;
}
