#include "main.h"
/**
 * append_text_to_file - Description of the function.
 * @filename : name of file
 * @text_content : number of letters to print
 * Return: Description of the return value (if applicable).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int lent = 0, file;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[lent])
	{
		lent++;
	}

	bytes_write = write(file, text_content, lent);

	if (bytes_write == -1)
	{
		close(file);
		return (-1);
	}

	return (1);
}


