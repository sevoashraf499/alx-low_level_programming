#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all letters from z to a.
 * starting from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c > 96; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
