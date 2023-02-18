#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print numbers 0 to 9 followed by a newline
 * Return: Always 0
 */

int main(void)
{
int n;

for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}

