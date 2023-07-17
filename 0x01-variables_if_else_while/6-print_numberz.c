#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10
 * starting from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	short int c;

	for (c = 0; c < 10; c++)
		putchar(c);

	putchar('\n');

	return (0);
}

