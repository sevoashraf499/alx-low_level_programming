#include "main.h"
#include<limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int r;

	r = ((n == INT_MIN) ? 8 : (n < 0) ? -n : n) % 10;

	_putchar(r + '0');

	return (r);
}
