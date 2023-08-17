#include<stdio.h>
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
for (i = 1; i <= 100; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf(" FizzBuzz");
}
else if (i % 5 == 0)
{
printf(" Buzz");
}
else if (i % 3 == 0)
{
printf(" Fizz");
}
else if (i == 1)
{
printf("%d",i);
}
else
{
printf(" %d",i);
}
}
printf("\n");
return (0);
}
