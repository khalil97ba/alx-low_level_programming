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
int lc;

for (lc = 0; lc <= 9; lc++)
{
	printf("%d", lc);
}
putchar('\n');

return (0);
}
