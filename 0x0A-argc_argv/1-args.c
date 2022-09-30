#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (argc-- > 1)
		count++;

	(void)(*argv);

	printf("%d\n", count);
	exit(EXIT_SUCCESS);
}
