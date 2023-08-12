#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ahpla;

	for (ahpla = 'z'; ahpla >= 'a'; ahpla--)
	{
		putchar(ahpla);
	}
	putchar('\n');
	return (0);
}
