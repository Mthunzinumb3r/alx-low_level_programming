#include <stdio.h>
#include "main.h"

/**
 * main - prints alphabets a lowercase
 *
 * Return: always 0.
 */

void print_alphabet(void);

int main()
{
	print_alphabet();
	return 0;
}

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
