#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{
int p;
int i;

p = 100;
i = 1;
while (i <= 100)
{
if (i % 15)
{
printf("FizzBuzz ");
}

else if (i % 3 == 0)
{
printf("Fizz ");
}

else if (i % 5 == 0)
{
if (i < p)
printf("Buzz ");

else
printf("Buzz");
}

else
{
printf("%i ", i);
}

i++;


}
printf("\n");
return (0);
}
