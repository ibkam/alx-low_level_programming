#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to a string s
 * @accept: pointer to the substring
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 *
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
