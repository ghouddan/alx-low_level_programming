#include"main.h"
/**
 * time_table - Writes the alphabet in lowercase to stdout
 *  The character to print
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int result = i * j;
_putchar(result / 10 + '0');  
_putchar(result % 10 + '0');  
if (j < 9)
{
_putchar(',');  
_putchar(' ');  
}
}
_putchar('\n'); 
}
}
