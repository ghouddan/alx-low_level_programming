#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - Writes the alphabet in lowercase to stdout
 * c: The character to print
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int
void print_alphabet_x10(void)
{
int i;
char c;
i = 0;
while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}

}
