#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *@n: the number of times the character
 */

void print_diagonal(int n)
{
	int h;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 0; h < n; h++)
		{
			for (j = 0; j < h; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
