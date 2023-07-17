#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9 separated by , and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	short int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		putchar(44);
		putchar(32);

		if (c == 57)
			break;
	}

	putchar('\n');

	return (0);
}

