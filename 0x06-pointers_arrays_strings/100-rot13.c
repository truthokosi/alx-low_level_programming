#include "main.h"
/**
  *rot13 - encoder rot13
  *@t: pointer to string
  *Return: pointer to t
  */

char *rot13(char *t)
{
int m;
int n;
char letters1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char letters2[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (m = 0; t[m] != '\0'; m++)
{
for (n = 0; n < 52; n++)
{
if (t[m] == letters1[n])
{
t[m] = letters2[n];
break;
}
}
}
return (t);
}
