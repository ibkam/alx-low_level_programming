#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int ww;
	int ll;
	int mul;

	for (ww = 0; ww <= 9; ww++)
	{
		for (ll = 0; ll <= 9; ll++)
		{
			mul = ww * ll;
			if (ll == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			else
			{
				_putchar('0' + (mul / 10));
				_putchar('0' + (mul % 10));
			}
			if (ll < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
