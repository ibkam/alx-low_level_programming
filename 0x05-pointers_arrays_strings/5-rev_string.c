#include "main.h"
#include <string.h>

/**
 * rev_string -  reverses a string
 * @s: variable to be reversed
 *
 */

void rev_string(char *s)
{
	char tmp;
	int h = strlen(s) - 1, j = 0;

	while (h > j)
	{
		tmp = s[h];
		s[h] = s[j];
		s[j] = tmp;
		h++;
		j--;
	}
}
