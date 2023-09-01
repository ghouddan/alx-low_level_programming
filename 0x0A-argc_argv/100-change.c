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
int number, i, result;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
number = atoi(argv[1]);
result = 0;
if (number < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5 && number >= 0; i++)
{
while (number >= coins[i])
{
result++;
number -= coins[i];
}
}
printf("%d\n", result);
return (0);
}


