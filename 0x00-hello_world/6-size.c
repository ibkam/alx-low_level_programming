#include <stdio.h>

/**
 * main -Entry point
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
	fprintf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	fprintf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	fprintf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	fprintf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	fprintf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);

}
