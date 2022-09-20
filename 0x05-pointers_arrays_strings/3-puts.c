#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 */

void _puts(char *str)
{
	int h = 0;

	while (str[h] != '\0')
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
