#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @needle: the substring
 * @haystack: the string
 *
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack, *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
