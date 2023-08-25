#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 if both are equal, -15 if s1 > s2, and 15 otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	if (*s1 == '\0')
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}

