#include "main.h"

/**
 **_strpbrk - Return a pointer to byte s.
 * @s: char s
 * @accept: char accept
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, ii;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
		if (s[i] == accept[ii])
		{
			return (s + i);
		}
		}
	}
	return ('\0');
}
