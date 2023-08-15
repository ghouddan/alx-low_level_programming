#include"main.h"
/**
 * _abs - Writes the alphabet in lowercase to stdout
 * @c: The character to print
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int c)
{
if (c < 0)
{
return (-c);
}
if (c > 0)
{
return (c);
}
if (c == 0)
{
return (0);
}
return (0);
}
