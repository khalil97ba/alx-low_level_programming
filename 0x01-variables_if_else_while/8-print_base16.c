#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print all the digits of base 16 in lowercase
 * Return: Always 0
 */

int main(void)
{
char i;

for (i = '0'; i <= '9'; ++i)
{
	putchar(i);
}
for (i = 'a'; i <= 'f'; ++i)
{
	putchar(i);
}
putchar('\n');

return (0);
}
