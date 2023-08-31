#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - output of characters and strings
 * @s: string input
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
