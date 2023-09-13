#include <stdlib.h>
#include "function_pointers.h"
/**
 * _memcpy - Brief description of the function.
 * @name : string to print
 * @f : function pointer 
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void print_name(char *name, void (*f)(char *))
{
if ( name != NULL && f != NULL )
{	
f(name);
}
}
