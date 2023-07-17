#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lower case without q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		else
			putchar(c);
	}

	putchar('\n');

	return (0);
}
