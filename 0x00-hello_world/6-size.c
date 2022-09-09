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
	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("size of an int: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));

	return (0);

}
