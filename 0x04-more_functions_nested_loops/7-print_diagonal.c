#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *@n: print int
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; i < i; j++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}

	}

	else
	{
		_putchar('\n')
	}
}


