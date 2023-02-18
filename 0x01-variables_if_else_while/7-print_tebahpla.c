#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print lowercase alphabet backwards followed by a newline.
 * Return: Always 0
 */

int main(void)
{
char i;

for (i = 'z'; i >= 'a'; i--)
{
	putchar(i);
}
putchar('\n');

return (0);
}

