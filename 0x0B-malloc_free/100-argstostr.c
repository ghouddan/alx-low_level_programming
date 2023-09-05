#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Brief description of the function.
 * @ac : arument count
 * @av : argument vector
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *argstostr(int ac, char **av)
{
int j, i, lent, k;
char *argstor;
i = 0;
j = 0;
lent = 0;
k = 0;
while (i <= ac)
{
while (av[j])
{
lent += j++;
}
i++;
j = 0;
}
if (ac == 0 || av == NULL)
{
return (NULL);
}
argstor = malloc((lent + 1) * sizeof(char *));
if (argstor == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
argstor[k] = av[i][j];
k++;
}
if (argstor[k] == '\0')
{
argstor[k++] = '\n';
}
}
return (argstor);
}
