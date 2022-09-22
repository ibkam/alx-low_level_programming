#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 * @dest:pointer to the first string
 * @src:pointer to the second string
 * @n: size of string to copy
 *
 * Return:pointer to string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
