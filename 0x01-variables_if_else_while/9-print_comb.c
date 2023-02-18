#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Print all single integer numbers of base 10
 *		 stating from 0, followed by a new line
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
	putchar(i);

	if (i != '9')

	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');

return (0);
}
