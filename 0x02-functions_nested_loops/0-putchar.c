#include<stdio.h>
#include"main.h"
/**
 * main - Entry point of the program.
 *
 * This function demonstrates the usage of the puts function.
 * It displays a message to the standard output.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
/**
 * function_name - Brief description of the function.
 * @parameter1: Description of parameter 1.
 * @parameter2: Description of parameter 2.
 *
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */

void _putc(void)
{
int i;
char put[] = "_putchar\n";
for (i = 0; i < 9; i++)
{
putchar(put[i]);
}
}
int main(void)
{
_putc();
return (0);
}

