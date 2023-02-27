#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}
