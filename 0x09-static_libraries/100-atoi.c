#include "main.h"

int _pow(int n);

/**
 * _pow - check the code for Holberton School students.
 *@n: n.
 * Return: Always 0.
 */

int _pow(int n)
{
	int xres = 1, p;

	for (p = 0; p < n; p++)
	{
		xres *= 10;
	}
	return (xres);
}
/**
 * _atoi -convert a string to an integer.
 *@s: s.
 * Return: Always 0.
 */
int _atoi(char *s)
{

	int a, signo = 1, n, res = 0;
	int ini, fin;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
		{
			signo *= -1;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			break;
		}
	}
	if (s[a] == '\0')
	{
		return (0);
	}
	else
	{
		ini = a;

		for (; s[a] >= '0' && s[a] <= '9'; a++)
		{
			fin = a;
		}
		for (n = 0; fin >= ini; fin--, n++)
		{
			res += (s[fin] - '0') * _pow(n);
		}
		return (res * signo);
	}
}
