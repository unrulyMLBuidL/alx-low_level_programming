#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print alphabet both lower case and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, b;

	c = 'a';
	b = 'A';
	for (; c <= 'z'; )
	{
	putchar(c);
	c++;
	}
	for (; b <= 'Z'; )
	{
	putchar(b);
	b++;
	}
	putchar('\n');
	return (0);

}
