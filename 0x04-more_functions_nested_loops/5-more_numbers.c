#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers
 *
 */

void more_numbers(void)
{
	int ii;
	int jj;

	for (jj = 0; jj <= 9; jj++)
	{
		for (ii = 0; ii <= 14; ii++)
		{
			if (ii >  9)
			{
				_putchar(ii / 10 + '0');
			}
			_putchar(ii % 10 + '0');
		}
		_putchar('\n');
	}
}
