#include <stdio.h>

/**
 * main - print the size of types
 *
 * Description: using sizeof to print the size of various types.
 * Return: Always 0 (succesful)
 */

int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	fprintf(stderr, "[Anything]");
	return (0);
}
