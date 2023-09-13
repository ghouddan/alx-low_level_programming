#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc : number of argument
 * @argv : vector of argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
return (0);
}
