#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer to 2-d array
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; i < 8; j++)
			printf("%c", a[i][j]);
		putchar('\n');
	}
}
