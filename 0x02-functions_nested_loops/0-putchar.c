#include"main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _putc(void)
{
int i;
char put[] = "_putchar\n";
for (i = 0; i < 9; i++)
{
_putchar(put[i]);
}
}
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
_putc();
return (0);
}

