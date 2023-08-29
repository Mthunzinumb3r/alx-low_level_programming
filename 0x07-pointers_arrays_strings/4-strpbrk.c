#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence in the string s accept
 * @s: the string investigated
 * @accept: input bytes
 *
 * Return: s or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
