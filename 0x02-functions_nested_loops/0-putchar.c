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
void _putc()
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

