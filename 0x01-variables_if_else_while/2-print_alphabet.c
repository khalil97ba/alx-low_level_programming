#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0
 *Author: Ibrahima ba
 */

int main(void)
{
char z;
z = 'a';

while (z <= 'z')
{
	putchar(z);
	z++;
}
putchar('\n');
return (0);
}
