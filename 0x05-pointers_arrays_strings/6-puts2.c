#include "main.h"
/**
 * puts2 - Brief description of the function.
 * @str : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
/*void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}*/
void puts2(char *str)
{
int size;
int i;
size = 0;
while (str[size] != '\0')
{
size++;
}
for (i = 0; i < size; i++){
if (i % 2 == 0){
putchar(str[i]);
}
}
putchar('\n');
}


