#include <stdio.h>
#include <unistd.h>

/**
 * *main - Entry point
 *
 * Description: print a quote using write function
 * ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: This time return an error 1.
 */

int main(void)
{
	char var[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n"
	write(2, var, sizeof(var) - 1);
	return (1);
}
		
