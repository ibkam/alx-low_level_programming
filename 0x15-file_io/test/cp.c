#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocate 1024 bytes
 * @file: The file the buffer is editting character on
 * Return: a pointer to the allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file -close file descriptor
 * @fd: the file descriptor to be closed
 */

void close_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: number of argument passed
 * @argv: an array contaiining the arguments
 *
 * Description:if the argument count is incorrect - exist code 97
 *             if the file_from cannot be read - exist code 98
 *             if the file_to cannot be written - exist code 99
 *             if file description cannot close - exist code 100
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int file1, file2, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}



	buffer = create_buffer(argv[2]);
	file1 = open(argv[1], O_RDONLY);
	r = read(file1, buffer, 1024);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(file2, buffer, r);
		if (file2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(file1, buffer, 1024);
		file2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(file1);
	close_file(file2);

	return (0);
}

