#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of actual parameter passed to main
 * @argv: pointer to the first element passed to main
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	exit(EXIT_SUCCESS);
}
