#include <stdio.h>
#include <stdlib.h>
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
if (argc == 3)
{
printf("%d\n",atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
