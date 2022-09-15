#include "main.h"

/**
 * print_most_numbers - prints the numbers.
 *
 */

void print_most_numbers(void)
{
	int ii;

	for (ii = 48; ii < 59; ii++)
	{
		if (ii == 50 || ii == 52)
			continue;
		else
			_putchar(ii);
	}
	_putchar('\n');
}
