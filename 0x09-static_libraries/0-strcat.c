#include "main.h"

/**
 * *_strcat - concatenate strings.
 *@dest: dest
 *@src: src
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0,  ii;

	while (dest[i])
		i++;
	for (ii = 0; src[ii] != '\0';)
	{
		dest[i++] = src[ii++];
	}
	return (dest);
}
