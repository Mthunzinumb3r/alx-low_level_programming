#include "main.h"
#include <stdio.h>

/**
 * _memset - Fill memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte value to fill with.
 * @n: Number of bytes to fill.
 *
 * Return: A pointer to the memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char value = b;
	size_t i;

	for (i = 0; i < n; i++)
	{
		s[i] = value;
	}
	return (s);
}
