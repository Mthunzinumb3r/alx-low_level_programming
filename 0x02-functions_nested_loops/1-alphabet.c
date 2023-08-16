#include <stdio.h>
#include "main.h"

/**
 * main - print all alphabets in lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
	void print_alphabet(void)
	{
		char alpha;

		for(alpha = 'a';alpha <= 'z'; alpha++)
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
