#include "main.h"
#include <string.h>

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: pointer to  the main string
 * @needle: pointer to substring
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
