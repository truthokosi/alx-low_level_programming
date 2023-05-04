#include "main.h"
/**
  *cap_string - to capitalize all words of a string
  *@s: pointer to a string
  *Return: pointer to s
  */

char *cap_string(char *s)
{
int string;

/* counting through string*/
string = 0;
while (s[string] != '\0')
{/* if next character after counting is a char, capitalise it */
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
if (s[string] == ' ' || s[string] == '\t' || s[string] == '\n'
|| s[string] == ',' || s[string] == ';' || s[string] == '.'
|| s[string] == '"' || s[string] == '(' || s[string] == ')'
|| s[string] == '{' || s[string] == '}')
{
if (s[string + 1] >= 97 && s[string + 1] <= 122)
{
s[string + 1] = s[string + 1] - 32;
}
}
string++;
}
return (s);
}
