#include <stdio.h>

/**
 * main - prints the number from 1-100 but multiple of three,
 * Fizz is printed in place of the no, Buzz in place of
 * multiples, of 5and FizzBuzz for both 5 and 3
 *
 * Return: Always 0;
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n == 100)
		{
			continue;
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
