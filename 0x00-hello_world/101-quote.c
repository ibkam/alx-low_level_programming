#include <stdio.h>

#include <unistd.h>



/**
 * main - Entry point
 *
 * Description: print a quote using write function
 * ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: should return 1 (sucess)
 */

int main(void)

{
	char var[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, var, sizeof(var) - 1);
	return (1);
}
