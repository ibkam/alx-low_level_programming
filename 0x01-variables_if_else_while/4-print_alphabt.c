#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, expect q and e
 *
 * Return: 0 if successful
 */
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		if (var == 'e' || var == 'q')
			continue;

			putchar(var);
	}
	putchar('\n');
	return (0);

}
