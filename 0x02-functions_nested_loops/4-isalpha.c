#include "main.h"

/**
 * _isalpha - Return 1 if @c is a letter, lowercase or uppercase
 * Description: Checks for alphabetic characters
 * @c: Contains value to be compared
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}

		else
		{
			return (0);
		}
	}
}
