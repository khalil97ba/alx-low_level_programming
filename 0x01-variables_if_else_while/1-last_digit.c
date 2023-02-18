#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Program assigns a random number to n each time it is executed.
 * It then prints the last digit of the number stored in the variable n.
 * Return: Always 0
 * Author: Ibrahima ba
 */

int main(void)
{
int n;
int z = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, z);
}

if
(n == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, z);
}

if
(n < 6 && n != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, z);
}
return	(0);
}
