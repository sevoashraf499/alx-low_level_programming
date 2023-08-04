#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, fib1 = 0, fib2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;

		printf("%d", sum);

		fib1 = i;
		fib2 = sum;

		if (i != 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

