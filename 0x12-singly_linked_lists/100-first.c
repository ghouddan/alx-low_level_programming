#include "lists.h"
#include <stdio.h>
/**
 * print_befor - print befor the main function
 *
 * Return : Description of the return value (if applicable).
 */
void __attribute__((constructor)) print_befor()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
