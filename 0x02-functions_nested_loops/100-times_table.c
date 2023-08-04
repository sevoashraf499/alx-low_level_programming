#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == n)
			{
				printf("%d", i * j);
				return;
			}

			if (i * (j + 1) < 10)
				printf("%d,   ", i * j);
			else if (i * (j + 1) < 100)
				printf("%d,  ", i * j);
			else if (i * (j + 1) < 1000)
				printf("%d, ", i * j);
		}
		putchar('\n');
	}
}

