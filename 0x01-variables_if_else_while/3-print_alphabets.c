#include<stdio.h>
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
char c;
char C;
for(c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for(C = 'A'; C <= 'Z'; C++)
{
putchar(C);
}
putchar('\n');
return (0);
}
