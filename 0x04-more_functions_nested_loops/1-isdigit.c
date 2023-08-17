#include "main.h"
/**
 * _isdigit - writes the character c to stdout
 *@c : the variable to check
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
if(c >=48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

