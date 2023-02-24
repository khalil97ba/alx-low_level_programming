#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
		}

		else
		{
			printf("%i", i);
		}
	}

	printf("\n");
	return (0);
}


