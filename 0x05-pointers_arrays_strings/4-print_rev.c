#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Prints the string in reverse folowed by a new line
 * @s: Pointer to the string
 * Return: Always
*/
void print_rev(char *s)
{
	int length = strlen(s);
	char *n = s + length - 1;

	while (n >= s)
	{
		printf("%c", *n);
		n--;
	}
	printf("\n");
}
