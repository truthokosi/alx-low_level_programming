#include "main.h"
#include <stdlib.h>
/**
  *_strdup - used to duplicate a string
  * is a duplicate of the string str
  *@str: the primary string to be duplicated
  *Return: pointer to the duplicated string, NULL if insufficient memory
  */
char *_strdup(char *str)
{
int a = 0;
int b = 1;
char *t;

if (str == NULL)
return (NULL);
while (str[b])
{
b++;
}

t = malloc((sizeof(char) * b) +1);
if (t == NULL)
return (NULL);
while (a < b)
{
t[a] = str[a];
a++;
}
t[a] = '\0';
return (t);
}
