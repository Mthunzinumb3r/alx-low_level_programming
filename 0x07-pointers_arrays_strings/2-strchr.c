#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @c: the character to be located
 * @s: the string
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
