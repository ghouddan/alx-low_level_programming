#include "main.h"
/**
 * _print_rev_recursion - Brief description of the function.
 * @s : string to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return ;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
