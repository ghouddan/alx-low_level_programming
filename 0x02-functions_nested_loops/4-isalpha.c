#include "main.h"
/**
 * _isalpha - Writes the alphabet in lowercase to stdout
 * c: The character to print
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
