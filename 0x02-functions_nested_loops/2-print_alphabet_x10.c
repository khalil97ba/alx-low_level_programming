#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: print alphabet in lowercase, 10 times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
}
