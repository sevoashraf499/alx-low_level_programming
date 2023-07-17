#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all letters from a to z in lower case then upper case.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a';; c++)
	{
		putchar(c);

		if (c == 'z')
			c = 'a' - ' ' - 1;

		if (c == 'Z')
			break;
	}

	putchar('\n');

	return (0);
}

