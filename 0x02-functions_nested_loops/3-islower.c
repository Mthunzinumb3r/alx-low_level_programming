#include "main.h"

/**
 * _islower - checks if char is lower
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a')
		return (1);
	else
		return (0);
}
