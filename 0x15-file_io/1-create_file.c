#include "main.h"
/**
 * create_file - Description of the function.
 * @filename : name of file
 * @text_content : content of file
 * Return: Description of the return value (if applicable).
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int lent;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	for (lent = 0; text_content[lent]; lent++)
		;
	bytes_write = write(file, text_content, lent);
	if (bytes_write == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
