#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: the string measured
 * @accept: the input condition
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s))
	{
		count++;
		s++;
	}
	return (count);
}
