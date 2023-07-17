#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all characters of base 16.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 48;; c++)
	{
		putchar(c);

		if (c == 57)
			c = 96;
		if (c == 102)
			break;
	}

	putchar('\n');

	return (0);
}
