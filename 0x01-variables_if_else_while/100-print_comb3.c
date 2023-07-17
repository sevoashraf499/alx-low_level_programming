#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 99 separated by , and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	short int c;
	short int i;

	for (c = 48; c < 58; c++)
	{
		for (i = c + 1;; i++)
		{
			putchar(c);
			putchar(i);

			if (i == 57)
				break;

			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
