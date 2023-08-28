#include "main.h"
/**
 * print_chessboard- Brief description of the function.
 * @a : chessboar
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void print_chessboard(char (*a)[8])
{
int j;
int i;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
