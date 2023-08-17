#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @int: the int to check
 * Return: the absolute value of int
 */

int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (-num);
	}
	return (0);
}
