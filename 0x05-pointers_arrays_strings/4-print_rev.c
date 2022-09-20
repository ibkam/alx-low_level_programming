#include <string.h>
#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: stirng to be reversed
 *
 */

void print_rev(char *s)
{
	int h, len = strlen(s);

	for (h = len - 1; h >= 0; h--)
		_putchar(s[h]);

	_putchar('\n');
}
