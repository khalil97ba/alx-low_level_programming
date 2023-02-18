#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print lowercase alphabet excluding e and q
 * Return: Always 0
 */

int main(void)
{
char l = 'a';

while (l <= 'z')
{
	if (l != 'e' && l != 'q')
	{
		putchar(l);
	}
	l++;
}
putchar('\n');
return (0);
}
