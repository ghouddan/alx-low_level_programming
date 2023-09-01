#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc : argument count
 * @argv : argument vector
 * This function demonstrates the usage of the puts function.
 * It displays a message to the standard output.
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
