#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string.
 * @src: the string to be appended
 * @dest: the string to be appended to
 * @n: number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_start);
}
