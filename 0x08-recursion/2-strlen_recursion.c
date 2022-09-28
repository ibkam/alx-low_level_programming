#include "main.h"
#include "string.h"

/**
 * _strlen_recursion - returns the length of a string recursively
 * @s:pointer to the string
 *
 * Return:string length
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (strlen(s) > '\0')
		count += _strlen_recursion(s + 1) + 1;

	return (count);
}
