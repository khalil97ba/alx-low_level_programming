#include "main.h"

/**
 * *_memset - fills first byte of the memory area pointed
 * @s: char s
 * @b: char b
 * @n: n
 *
 * Return: 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
		return (s);
}
