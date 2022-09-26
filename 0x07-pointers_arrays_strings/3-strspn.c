#include "main.h"
#include <string.h>

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to a string s
 * @accept: pointer to the substring
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
