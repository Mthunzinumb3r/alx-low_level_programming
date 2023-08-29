#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - takes a pointer to the matrix
 * @a: is the matrix
 * @size: the dimensions of the matrix
 *
 * Return: 0.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int mainDiagonalSum = 0;
	int antiDiagonalSum = 0;
	
	for (i = 0; i < size; i++)
	{
		mainDiagonalSum += a[i * size + i];
		antiDiagonalSum += a[i * size + (size - 1 - i)];
	}
	printf("%d\n", mainDiagonalSum);
	printf("%d\n", antiDiagonalSum);
}
