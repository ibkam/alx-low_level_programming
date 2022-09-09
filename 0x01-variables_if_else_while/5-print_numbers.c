#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 if successful
 */
int main(void)
{
	int var;

	for (var = 0; var < 10; var++)
		printf("%d", var);

	printf("\n");

	return (0);

}
