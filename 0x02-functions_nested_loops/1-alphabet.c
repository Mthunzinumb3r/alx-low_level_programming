#include <stdio.h>
#include "main.h"

/**
 * main - prints all alphabets in lowercase
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
