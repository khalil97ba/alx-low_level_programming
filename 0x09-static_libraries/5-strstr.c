#include "main.h"

/**
 **_strstr  - find first occurrence of string.
 * @haystack: char haystack
 * @needle: char needle
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; haystack++)
	{
		for (; haystack[i] == needle[i]; i++)
		{
		}
			if (needle[i] == '\0')
			{
				return (haystack);
			}
	}
	return ('\0');
}
