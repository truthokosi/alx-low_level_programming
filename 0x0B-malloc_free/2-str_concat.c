#include "main.h"
#include <stdlib.h>
/**
  *str_concat - to concatenate two string
  *@s1: the first string
  *@s2: the second string
  *Return: content of s1, followed by s2, else NULL if failure
  */

char *str_concat(char *s1, char *s2)
{
int a = 0, b = 0, i = 0, j = 0;
char *t;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[a])
a++;
while (s2[b])
b++;

j = a + b;

t = malloc((sizeof(char) * j) +1);

if (t == NULL)
return (NULL);

b = 0;
while (i < j)
{
if (i <= a)
t[i] = s1[i];
if (i >= a)
{
t[i] = s2[b];
b++;
}
i++;
}
t[i] = '\0';
return (t);
}
