#include "main.h"
/**
 * string_toupper -  Brief description of the function.
 * @string : string
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *string_toupper(char *string)
{
    int i;
    int size;
    size = 0;
    while (string[size])
    {
        size++;
    }
    for (i = 0; i < size; i++)
    {
        if ((string[i] >= 97) && (string[i] <= 122))
        {
            string[i] = string[i] - 32;
        }
    }
    return (string);
}
