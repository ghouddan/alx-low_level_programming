#include"main.h"
/**
 * time_table - Writes the alphabet in lowercase to stdout
 *  The character to print
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table() {
int i;
int j;
int result;
for (i = 0; i <= 9; i++) {
for (j = 0; j <= 9; j++) {
result = i * j;
if (result >= 100) {
_putchar(result / 100 + '0');
result %= 100;
}
else
{
_putchar(' ');
}
if (result >= 10) {
_putchar(result / 10 + '0');
}
else
{
_putchar(' ');
}
_putchar(result % 10 + '0');
if (j < 9) {
_putchar(',');
}
_putchar(' ');
}
_putchar('\n');
}
}
