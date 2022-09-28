#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion -prints a string in reverse recusively
 * @s: pointer to the string
 *
 */

void _print_rev_recursion(char *s)
{
	if (strlen(s) > 1)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
