#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment of s.
 * @s: char s
 * @accept:char accept
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, ii, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (s[i] == accept[ii])
			{
			count++;
			break;
			}
			if (accept[ii + 1] == '\0')
			{
				return (count);
			}
		}
	}
	return (count);
}

