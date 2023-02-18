#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print lower and upper alphabet on the same line
 * Return: Always 0
 */

int main(void)
{
char lc = 'a';
char LC = 'A';

while (lc <= 'z')
{
	putchar(lc);
	lc++;
}
while (LC <= 'Z')
{
	putchar(LC);
	LC++;
}
putchar('\n');
return (0);
}
