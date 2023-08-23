#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: string to be appended
 * @src: string to be appended to
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*result != '\0')
	{
		result++;
	}
	while (*src != '\0')
	{
		*result = *src;
		result++;
		src++;
	}
	*result = '\0';

	return (dest);
}
