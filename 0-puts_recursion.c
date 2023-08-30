#include "main.h"
/**
 * _puts_recursion - Brief description of the function.
 * @s : string to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        putchar('\n');
        return ;
    }
    putchar(*s);
    _puts_recursion(s + 1);

}
