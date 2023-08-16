#include <stdio.h>
#include "main.h"

/**
 * main - print all alphabets in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet(void);
	return 0;
}

void print_alphabet(void)
{
    char alpha;
    for(alpha = 'a'; alpha <= 'z'; alpha++)
    {
        putchar(alpha);
    }
    putchar('\n');
}
