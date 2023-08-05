#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i;
	unsigned long fib1 = 0, fib2 = 1, sum = 0, res = 0;

	for (i = 0; i < 33; i++)
	{
		sum = fib1 + fib2;

		fib1 = fib2;
		fib2 = sum;

		if (sum < 4000000 && sum % 2 == 0)
			res += sum;
	}

    printf("%lu\n", res);

	return (0);
}

