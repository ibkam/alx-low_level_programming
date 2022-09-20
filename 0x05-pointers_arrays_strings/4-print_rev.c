#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reversed order
 * @s: string to be reversed
 *
 */

void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
