#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks for lowercase or uppercase character.
 * @c: variable
 * Return: int 1 if true or 0 if false
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')

	{

		return (1);

	}

	if (c >= 'A' && c <= 'Z')

	{
		return (1);

	}

	else

	{

		return (0);

	}
}
