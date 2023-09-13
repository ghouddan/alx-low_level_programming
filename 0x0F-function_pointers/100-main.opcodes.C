#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
char *assem = (char *) main;
int i, byte;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
byte = atoi(argv[1]);
if (byte < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < byte; i++)
{
printf("%02x", assem[i] & 0xFF);
if (i != byte - 1)
printf(" ");
}
printf("\n");
return (0);
}
