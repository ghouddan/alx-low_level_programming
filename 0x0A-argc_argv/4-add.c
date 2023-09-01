#include <stdio.h>
#include <ctype.h>
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
int i;
int j;
int sum;
sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
