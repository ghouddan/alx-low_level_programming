#include "main.h"
/**
 *  _strlen_recursion - Brief description of the function.
 * @s : string to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int _strlen_recursion(char *s)
{
int lent;
lent = 0;
if (*s)
{
lent++;
lent += _strlen_recursion(s + 1);
}
return (lent);
}
