#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum = 0;

	for (i = 0; i < 98; i++)
	{
		sum = fib1 + fib2;

		printf("%lu", sum);

		if (i != 97)
			printf(", ");
		else
			printf("\n");

		fib1 = fib2;
		fib2 = sum;
	}

	return (0);
}

