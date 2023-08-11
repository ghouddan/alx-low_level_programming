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
int i;
for(i = 0; i <= 15; i++)
{
if (i < 10)
{
putchar('0' + i);
}
else
{
putchar('a' + (i - 10));
}
}
putchar('\n');
return (0);
}
