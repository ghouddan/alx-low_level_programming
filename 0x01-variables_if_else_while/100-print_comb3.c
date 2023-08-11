#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This function demonstrates the usage of the puts function.
 * It displays a message to the standard output.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{ 
int i;
for ( i = 0; i < 10; i++){
for(int j = i+1; j < 10; j++)
{
if(i != j)
{
putchar('0'+i);
putchar('0'+j);
if(i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
