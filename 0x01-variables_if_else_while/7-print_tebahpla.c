#include <stdio.h>
#include <stdlib.>

/**
 * main - Entry point
 * Description: Print lowercase alphabet backwards followed by a newline.
 * Return: Always 0
 * Author: ibrahima ba
 */

int main(void)
{
char z;

for (z = 'z'; z >= 'a'; z--)
{
	putchar(z);
}
putchar('\n');

return (0);
}
