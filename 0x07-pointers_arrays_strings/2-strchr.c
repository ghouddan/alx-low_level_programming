#include "main.h"
/**
 * _strchr - Brief description of the function.
 * @s: string 
 * @c : character to find
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *_strchr(char *s, char c)
{
     int i;
     i = 0;
     while (s[i] != '\0')
     {
         if(s[i] == c)
         {
             return (&s[i]);
         }
         i++;
     }
     return (0);
}
