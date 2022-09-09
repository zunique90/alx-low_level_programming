#include <stdio.h>


/**
 * main - Entry point
 *
 * This program prints alphabets in lower and upper case
 *
 * Return: (0) Success
 */

int main (void)
{

        char c = 'a';

        while (c <= 'z')
        {
                putchar(c);
                c++;
        }

        char d = 'A';

        while (d <= 'Z')
        {
                putchar(d);
                d++;
        }
        putchar ('\n');
        return (0);
}

