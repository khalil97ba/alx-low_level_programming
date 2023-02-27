#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = strlen(s);
	char *j = s;
	char *n = s + len - 1;
	char temp;

	while (j < n)
	{
		temp = *j;
		*j = *n;
		*n = temp;

		j++;
		n--;
	}
}
