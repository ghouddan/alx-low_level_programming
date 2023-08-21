#include "main.h"
/**
 * rev_string -  Brief description of the function.
 * @s : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */

void rev_string(char *s)
{
int i;
char tmp;
int j;
i = 0;
while (s[i])
{
i++;
}
for(j = 0; j < i; j++, i--)
{
tmp = s[i - 1];
s[i - 1] = s[j];
s[j] = tmp;

}
}
