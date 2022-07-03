#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print out all the alphabets in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	for(;c < 'z'; )
	{
	putchar(c);
	putchar('\n');
	c++;
	}
	return (0);	

}
