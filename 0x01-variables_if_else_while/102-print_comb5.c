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
	short int c, i;
	short int z = 48;

	for (c = 48; c < 58; c++)
		for (i = c; i < 58; i++)
			{
				putchar(48);
				putchar(z);

				putchar(32);

				putchar(c);
				putchar(i);

				if (c == 57 && i == 57 && z == 48)
				{
					c = 48;
					z++;
				}
				else if (c == 57 && i == 56 && z == 49)
					break;

				putchar(44);
				putchar(32);
			}

	putchar('\n');

	return (0);
}
