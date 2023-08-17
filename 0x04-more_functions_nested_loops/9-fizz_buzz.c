#include "main.h"
#include<stdio.h>
/**
 * print_line - Brief description of the function.
 * @n : number of time
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ( i % 5 == 0 && i % 3 == 0)
{
printf("FizzBuzz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d",i);
}
}
}
