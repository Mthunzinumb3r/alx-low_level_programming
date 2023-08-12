#include <stdio.h>

/**
 * main - Prints alphabets in lowercase and Uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
        char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

        for (i = 0; i < 52; i++)
        {
                putchar(alpha[i]);
        }
        putchar('\n');
        return (0);
}
