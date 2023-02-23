#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i;
	int nb;

	nb = 0;

	while (nb < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0')
		}

		nb++;
	}
	_putchar('\n');
}
