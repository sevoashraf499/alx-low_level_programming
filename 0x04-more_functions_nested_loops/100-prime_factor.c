#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of 612852475143
 * Bwave ICT / Bright Daniel
 * Return: always 0
 **/

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i <= n; i += 2)
		if (n % i == 0 && n != i)
			n /= i;

	printf("%lu\n", n);

	return (0);
}

