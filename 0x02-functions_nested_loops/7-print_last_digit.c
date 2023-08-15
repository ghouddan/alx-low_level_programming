#include"main.h"
/**
 * print_last_digit - Brief description of the function.
 * @c : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int print_last_digit(int c)
{
int last;
last = c % 10;
if (last < 0)
	last = -last;
return (last*10+last);
}


