#include <stdio.h>

/**
 * main - Prints alphabets in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha = 'a';
	while(alpha <= 'z')
	{
		putchar("%c", alpha);
		alpha++
	}
	putchar("\n")
	return 0;
}
