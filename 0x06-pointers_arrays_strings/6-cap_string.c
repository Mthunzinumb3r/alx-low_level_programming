#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_separator - Separators of word
 * @c: displayed separator charactors
 * Separators: " \t\n,;.!?\"(){}"
 * Return: 0.
 */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i] != '\0'; i++)
	{
		if (separators[i] == c)
		{
			return (true);
		}
	}
	return (false);
}

/**
 * cap_string - capitalizes every word of a string
 * @str: string to be capitalized
 * Return: str.
 */

char *cap_string(char *str)
{
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			str[i] = *str;
		}
		else
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
