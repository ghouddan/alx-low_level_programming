#include "main.h"
/**
 * is_palindrome - Brief description of the function.
 * @s : string to check
 * @i : checker
 * @len : lrngth og the string
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int palindrome(char *s, int i, int len);
int length(char *s);
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (palindrome(s, 0, length(s)));
}
/**
 * length - Brief description of the function.
 * @s : string to check
 * @i : checker
 * @len : lrngth og the string
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int length(char *s)
{
if (*s == '\0')
return (0);
return (1 + length(s + 1));
}
/**
 * palindrome - Brief description of the function.
 * @s : string to chek
 * @i : checker
 * @len : lrngth og the string
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int palindrome(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (palindrome(s, i + 1, len - 1));
}
