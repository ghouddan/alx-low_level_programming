#include<stdio.h>
#include<stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program.
 *
 * This function demonstrates the usage of the puts function.
 * It displays a message to the standard output.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

void positive_or_negative(int n)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
switch (n > 0)
{
case 1:
printf("%d is positive\n", n);
break;
case 0:
if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
break;
}
}

