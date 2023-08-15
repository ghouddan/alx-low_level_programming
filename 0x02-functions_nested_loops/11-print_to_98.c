#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - Writes the alphabet in lowercase to stdout
 * @c: The character to print
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
int i;
int j;
if (n == 98)
	ptintf("%d",n);
if (n < 98)
{
for (i = n; i <= 98; i++)
{
	printf("%d",i);
	putchar(',');
	putchar(' ');
}
else
{
for(j = n; j < 99; j--)
{
	printf("%d",j);
	putchar(',');
	putchar(' ');
