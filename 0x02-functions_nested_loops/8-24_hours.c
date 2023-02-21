#include "main.h"

/**
 * jack_bauer - prints every minute of Jack Bauer's day (00:00 - 23:59)
 *
 * @i && @j: Contains the value to be printed
 * Return: Always 0
 */

void jack_bauer(void)
{
	int j;
	int i;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar (j / 10 + '0');
			_putchar (j % 10 + '0');
			_putchar (':');
			_putchar (i / 10 + '0');
			_putchar (i % 10 + '0');
			_putchar ('\n');

		}
	}
}
