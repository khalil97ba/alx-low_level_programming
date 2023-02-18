#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0
 */

int main(void)
{
char lc;
lc = 'a';

while (lc <= 'z')
{
	putchar(lc);
	lc++;
}
putchar('\n');
return (0);
}
