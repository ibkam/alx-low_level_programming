#include <stdio.h>


/**
 * main - print the size of types
 *
 * Description: using sizeof to print the size of various types.
 * Return: Always 0 (succesful)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;
	/*sizeof evaluates the size of a variable */
	printf("size of a char: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	fprintf(stderr, "%s", "Anything\n");

	return (0);

}
