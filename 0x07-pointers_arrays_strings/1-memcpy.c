#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @n: number of bytes to be copied
 * @src: the memory area to be copied from
 * @dest: the area memory to be copied to
 *
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
