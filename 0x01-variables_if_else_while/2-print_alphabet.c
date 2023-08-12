#include <stdio.h>

/**
 * main - Prints alphabets in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha[26] = 'a';
	int i;
	while(i <= 26)
	{
		putchar(alpha[i]);
		alpha++
	}
	putchar("\n")
	return 0;
}
