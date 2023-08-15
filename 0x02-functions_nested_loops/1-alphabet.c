#include"main.h"/**
 * function_name - Brief description of the function.
 * @parameter1: Description of parameter 1.
 * @parameter2: Description of parameter 2.
 *
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
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
print_alphabet();
return (0);
}
