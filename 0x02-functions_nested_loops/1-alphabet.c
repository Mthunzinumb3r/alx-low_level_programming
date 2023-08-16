#include <stdio.h>
#include "main.h"

/**
 * main - prints alphabets in a lowercase
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
        putchar(letter);
	}
	putchar('\n');
}

1-main.c CODE

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */

int main()
{
	print_alphabet();
	return (0);
}
