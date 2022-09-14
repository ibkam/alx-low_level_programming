#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int jj = 0;

	while (jj++ < 10)
	{
		int ii;

		for (ii = 'a'; ii <= 'z'; ii++)
			_putchar(ii);
		_putchar('\n');

	}
}
