#include "main.h"
#include <stdio.h>
#define SIZE 1024
/**
 * main - entry point
 * description: copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
int file_from, file_to, read_F, write_F;
char buf[SIZE];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((read_F = read(file_from, buf, SIZE)) > 0)
{
write_F = write(file_to, buf, read_F);
if (write_F == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (read_F == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(file_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
if (close(file_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
return (0);
}
