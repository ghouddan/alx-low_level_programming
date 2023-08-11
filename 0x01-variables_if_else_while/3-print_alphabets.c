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
for(char c='a';c<='z';c++)
{
putchar(c);
}
for(char C='A';C<='Z';C++)
{
putchar(C);
}
putchar('\n');
return (0);
}
