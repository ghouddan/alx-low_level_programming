#include "main.h"
/**
 * read_textfile - Description of the function.
 * @filename : name of file
 * @letters : number of letters to print
 * Return: Description of the return value (if applicable).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *buffer;
	ssize_t bytes_read, bytes_write;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL || buffer == NULL)
		return (0);

	if (file == -1)
		return (0);

	bytes_read = read(file, buffer, letters);

	if (bytes_read == -1)
	{
		close(file);
		return (0);
	}

	buffer[bytes_read] = '\0';
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	close(file);
	if (bytes_read == bytes_write)
		return (bytes_read);
	else
		return (0);
}
