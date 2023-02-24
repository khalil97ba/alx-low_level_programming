#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 && i % 5)
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (i % 5 == 0)
		{
			if (i < 100)
			{
				printf("Buzz ");
			}

			else
			{
				printf("Buzz");
			}

			else
			{
				printf("%i", i);
			}
		}

		printf("\n");
		return (0);
	}
