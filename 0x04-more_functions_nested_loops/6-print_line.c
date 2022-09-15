#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *@n:number of times the character
 */

void print_line(int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
