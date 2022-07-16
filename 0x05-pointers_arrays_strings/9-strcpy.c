#include "main.h"

/**
 * _strcpy - copies the string pointed by src 
 *		including the null byte to dest.
 * @dest: param variable, buffer to house src.
 * @src: param variable to be the source.
 * return: char* type
 */
char *_strcpy(char *dest, char *src)
{
	char *dt = dest;

	if (dest == NULL)
	{
		return NULL;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dt;
}
