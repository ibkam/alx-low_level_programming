#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: a pointer to the file
 * @letters: the letters the fuction should read and print.
 *
 * Return: the number of letters it cpuld read and print
 *         0 if filename is NULL or write fails
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*opening the file*/
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}

	/*read*/
	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}

	/*write*/
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
