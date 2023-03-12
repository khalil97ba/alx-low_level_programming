#include "main.h"

/**
 **_strchr - Return a pointer.
 * @s: s
 * @c: c
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
		{
			return ('\0');
		}
}
