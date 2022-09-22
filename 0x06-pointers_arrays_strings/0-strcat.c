#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @src: pointer to the first string
 * @dest: pointer to the second string
 *
 * Return: pointer to string dest
 *
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
