#include <stdio.h>

/**
 * main - entry point
 *
 * description: printall the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z;

	z = 'z';
	for (; z >= 'a'; )
	{
	putchar(z);
	z--;
	}
	putchar('\n');
	return (0);

}
