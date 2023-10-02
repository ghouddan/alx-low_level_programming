#include "main.h"
#include <stdio.h>

#define SIZE 1024
/**
 * exit_with_error - creates a file
 * @code: exit code
 * @format: message
 * @arg : file name
 * Return: 1 on success, -1 on failure
 */
void exit_with_error(int code, const char *format, const char *arg)
{
	dprintf(2, format, arg);
	exit(code);
}
/**
 * main - entry point
 * description: copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{

	int file_from, file_to;
	ssize_t read_F, write_F;
	char buffer[SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((read_F = read(file_from, buffer, SIZE)) > 0)
	{
		write_F = write(file_to, buffer, read_F);
		if (write_F == -1)
		{
			close(file_from);
			close(file_to);
			exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (read_F == -1)
	{
		close(file_from);
		close(file_to);
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

