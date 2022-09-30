#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 if sucess
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	exit(EXIT_SUCCESS);
}
