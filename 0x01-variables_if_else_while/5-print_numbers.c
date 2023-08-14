#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers in base 10,
 *              starting from 0, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;

    while (digit <= 9)
    {
        putchar(digit + '0');
        digit++;
    }

    putchar('\n');

    return (0);
}

