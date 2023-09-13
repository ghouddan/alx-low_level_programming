#include "function_pointers.h"
/**
 * _memcpy - Brief description of the function.
 * @name : string to print
 * @f : 
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
