#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This function demonstrates the usage of the puts function.
 * It displays a message to the standard output.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of a int: %zu byte(s)\n", sizeof(int));
printf("Size of a long: %zu byte(s)\n", sizeof(long));
printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}

