#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print lowercase alphabet excluding e and q
 * Return: Always 0 (Success)
 * Author: Ibrahima ba
 */

int main(void)
{
    char letter;
    letter = 'a';
    while (letter <= 'z')
    {
        if (letter != 'q' && letter != 'e')
            putchar(letter);
        letter++;
    }
    putchar('\n');
    return (0);
}
