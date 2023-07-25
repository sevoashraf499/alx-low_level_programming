#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			r = i * j;

			if (r > 9)
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			} else
				_putchar(r % 10 + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');

				if ((i * (j + 1)) < 10)
					_putchar(' ');
			} else
				_putchar('\n');
		}
}
