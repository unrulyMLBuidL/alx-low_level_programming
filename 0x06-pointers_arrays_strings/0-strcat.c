#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: param variable for the destination string type char
 * @src: param variable for the source string type char
 * Return: pointers to str1 typer char *.
 */
char *_strcat(char *dest, char *src)
{
	int start, src_len, dest_len;

	start = 0;
	while (src[start] != '\0')
	{
		start++;
		src_len = start;
	}
	for (start = 0; dest[start] != '\0'; start++)
	dest_len = start;
	dest[dest_len + src_len - 1] = dest + src;
	return dest;
}
