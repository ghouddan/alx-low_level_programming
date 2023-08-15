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
char put[]="_putchar\n";
for(i = 0; i < 9; i++)
{
putchar(put[i]);
}
return (0);
}

