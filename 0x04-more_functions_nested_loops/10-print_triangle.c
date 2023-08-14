#include "main.h"

/**
 * print_triangle - entry point
 * owned by Bwave/Bright Daniel
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size <= 0)
		_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (spaces = 0; spaces < size - row; spaces++)
			_putchar(' ');

		for (hashes = 0; hashes < row; hashes++)
			_putchar('#');

		_putchar('\n');
	}
}

