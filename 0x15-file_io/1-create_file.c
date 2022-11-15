#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: the content to be include in the file
 *
 * Return: 1 on success or -1 on fail to create or write the file
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	/*including the text_content to the file*/
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/*if text_content is NULL, create an empty file*/
	o = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (o == -1)
	{
		if (errno == EEXIST)
		{
			o = open(filename, O_WRONLY | O_TRUNC);
			if (o == -1)
				return (-1);
		}
		else
			return (-1);
	}
	w = write(0, text_content, len);
	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
