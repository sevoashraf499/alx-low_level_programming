#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
		_putchar(c);

	_putchar('\n');
}
