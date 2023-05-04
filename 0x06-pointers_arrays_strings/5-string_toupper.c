#include "main.h"
/**
  *string_toupper - changes all lowercase letters to upper
  *@t: pointer declared to string
  *Return: pointer to uppercase
  */

char *string_toupper(char *t)
{
int string;

string = 0;

while (t[string] != '\0')
{
if (t[string] >= 97 && t[string] <= 122)
{
t[string] = t[string] - 32;
}
string++;
}
return (t);
}
