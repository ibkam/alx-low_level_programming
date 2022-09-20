#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @arr: array to be printed
 * @n: number of elements of the array to be printed
 *
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
