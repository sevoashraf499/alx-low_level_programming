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
	short int i;

	for (i = 48; i < 58; i++)
		putchar(i);

	putchar('\n');

	return (0);
}

