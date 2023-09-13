#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Brief description of the function.
 * @a : number 1
 * @b : number 2
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Brief description of the function.
 * @a : number 1
 * @b : number 2
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Brief description of the function.
 * @a : number 1
 * @b : number 2
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Brief description of the function.
 * @a : number 1
 * @b : number 2
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - Brief description of the function.
 * @a : number 1
 * @b : number 2
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
