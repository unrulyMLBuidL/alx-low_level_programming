#include "main.h"

/**
 * _memset - fills memory of '*s' with a constant byte.
 * @s: pointer to memory area s
 * @b: constant byte of type char
 * @n: number of byte to be allocated
 * Return: char pointer to pointer 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **str = &s;
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return *str;
}
