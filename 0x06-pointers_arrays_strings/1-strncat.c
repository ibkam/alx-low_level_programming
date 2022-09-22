#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @src: pointer to the first string
 * @dest: pointer to the second string
 * @n: interger to number of string to be concentrated
 *
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
