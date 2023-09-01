#include "main.h"
#include <stdio.h>

/**
 * factorial -  returns the factorial of a given number.
 * @n: input int
 *
 * Return: -1 to indicate an error, 1 if n = 0, else result
 */

int factorial(int n)
{
	int i, r;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		for (i = 1; i <= n; ++i)
		{
			r *= i;
		}
		return (r);
	}
}
