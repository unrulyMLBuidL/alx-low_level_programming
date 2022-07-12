#include "main.h"

/**
 * _strlen - entry point.
 * @s: paramater variable type char.
 * @start: int variable
 * description: returns the length of a string
 * return: int type
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
