#include "main.h"
#include <stdlib.h>
/**
  *argstostr - to concatenate all arguments of a program
  *@ac: argument count
  *@av: array
  *Return:Pointer to a new string NULL if ac = 0 and av == NULL
  */

char *argstostr(int ac, char **av)
{
int a = 0, b = 0, i = 0, j = 0;
char *t;

if (ac == 0 || av == NULL)
return (NULL);

while (b < ac)
{
while (av[b][i])
{
a++;
i++;
}

i = 0;
b++;
}

t = malloc((sizeof(char) * a) +ac + 1);

b = 0;
while (av[b])
{
while (av[b][i])
{
t[j] = av[b][i];
j++;
i++;
}
t[j] = '\n';

i = 0;
j++;
b++;
}
j++;
t[j] = '\0';
return (t);
}
