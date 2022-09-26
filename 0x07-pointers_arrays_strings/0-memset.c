#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the string s
 * @b: constant byte
 * @n: size of bytes of the memory area
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
