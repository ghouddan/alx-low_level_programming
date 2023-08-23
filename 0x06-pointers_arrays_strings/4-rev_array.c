#include "main.h"
/**
 * reverse_array -  Brief description of the function.
 * @s : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void reverse_array(int *a, int n)
{
    int i;
    int tmp;
    for(i = 0; i< n; i++, n--)
    {
        tmp = a[i];
        a[i] = a[n- 1] ;
        a[n - 1] = tmp;
    }
}


