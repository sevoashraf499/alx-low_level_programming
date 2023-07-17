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
	short int c, i, z;

	for (c = 48; c < 56; c++)
		for (i = c + 1; i < 57; i++)
			for (z = i + 1; z < 58; z++)
			{
				putchar(c);
				putchar(i);
				putchar(z);

				if (c == 55 && i == 56 && z == 57)
					break;

				putchar(44);
				putchar(32);
			}

	putchar('\n');

	return (0);
}
