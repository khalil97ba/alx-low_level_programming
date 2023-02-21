#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: print alphabet lowercase
 * Return: Void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
