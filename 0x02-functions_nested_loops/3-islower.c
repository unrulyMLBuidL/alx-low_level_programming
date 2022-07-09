#include "main.h"

/**
 * _islower - Entry point
 * Description: checks for lowercase character.
 * @c: variable
 * Return: int 1 if true or 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
