#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
	int h = strlen(str), i;

	if (h % 2 == 0)
	{
		for (i = h / 2; i < h; i++)
			_putchar(str[i]);
	}
	else
		for (i = (h / 2) + 1; i < h; i++)
			_putchar(str[i]);
	_putchar('\n');
}
