#include "main.h"

/**
 * _strlen - entry point.
 * @s: paramater variable type char.
 *
 * description: returns the length of a string
 * Return: int type length of the string
 */
int _strlen(char *s)
{
	int start;

	start = 0;
	while (s[start] != '\0')
	{
		start++;
	}
	return (start);
}
