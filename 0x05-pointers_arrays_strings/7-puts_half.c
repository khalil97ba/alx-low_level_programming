#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half -prints the second half followed by a line
 * @str: Pointer to the string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int length = strlen(str);
	char *end = str + length;

	if (length % 2 == 0)
	{
		char *mid = str + length / 2;

		while (mid < end)
		{
			printf("%c", *mid);
			mid++;
		}
	}
	else
	{
		char *mid = str + (length + 1) / 2;

		while (mid < end)
		{
			printf("%c", *mid);
			mid++;
		}
	}

	printf("\n");
}

