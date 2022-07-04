#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all the single digit number of base 10 starting from 0
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar(a + '0');
	}
	putchar('\n');
	return (0);

}
