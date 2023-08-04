#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum, res;

	do {
		sum = fib1 + fib2;

		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (sum % 2 == 0)
			res += sum;
	} while (sum < 4000000);

	printf("\n");

	return (0);
}

