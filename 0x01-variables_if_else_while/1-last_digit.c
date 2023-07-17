#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to int n everytime.
 * It executes, and prints it.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	short int lastDigit = n % 10;

	printf("Last digit of %d is %d ", n, lastDigit);

	if (lastDigit < 6 && lastDigit != 0)
		printf("and is less than 6 and not 0\n");
	else if (lastDigit > 5)
		printf("and is greater than 5\n");
	else
		printf("and is 0\n");

	return (0);
}
