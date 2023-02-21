#include "main.h"

/**
 * print_last_digit - Returns the value of the last digit
 *
 * @j: The last digit of this value is what we're looking for
 * Return: Always 0
 */

int print_last_digit(int j)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		i = i * -1;
	}

	_putchar(i + '0');

	return (i);
}

