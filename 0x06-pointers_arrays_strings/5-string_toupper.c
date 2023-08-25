#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the string to be changed from lowercase to uppercase
 * Return: str.
 */

char *string_toupper(char *str)
{
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}
