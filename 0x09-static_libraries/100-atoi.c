#include "main.h"
/**
  *_atoi - converts a string s to and integer type
  *@s: the string to be converted
  *Return: the resulting integer, 0 if no numbers in string
  */

int _atoi(char *s)
{
int t = 1;
int i = 0;
unsigned int d = 0;

while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
t *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
d = (d * 10) + (s[i] - '0');
i++;
}
d *= t;
return (d);
}

