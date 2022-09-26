#include "main.h"
#include <string.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: string to searched
 * @c: character to be located
 *
 * Return: a pointer to the first occurrence of the character c
 *
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
