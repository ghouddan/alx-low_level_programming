#include "main.h"
/**
 * cap_string& -  Brief description of the function.
 * @a : array to print
 * @n : size of array
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
 char *cap_string(char *string)
{
int index = 0;
while (string[index])
{
while (!(string[index] >= 'a' && string[index] <= 'z'))
index++;
if (string[index - 1] == ' ' ||
    string[index - 1] == '\t' ||
    string[index - 1] == '\n' ||
    string[index - 1] == ',' ||
    string[index - 1] == ';' ||
    string[index - 1] == '.' ||
    string[index - 1] == '!' ||
    string[index - 1] == '?' ||
    string[index - 1] == '"' ||
    string[index - 1] == '(' ||
    string[index - 1] == ')' ||
    string[index - 1] == '{' ||
    string[index - 1] == '}' ||
    index == 0)
string[index] -= 32;

index++;
}
return (string);
}
