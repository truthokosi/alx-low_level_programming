#include "main.h"
/**
  *_strcat - to concatenate two strings
  *@dest: destination string pointer
  *@src: source string pointer
  *Return: pointer to destination string
  */

char *_strcat(char *dest, char *src)
{
int string_length, t;

string_length = 0;
while (dest[string_length] != '\0')
{
string_length++;
}
for (t = 0; src[t] != '\0'; t++, string_length++)
{
dest[string_length] = src[t];
}
dest[string_length] = '\0';
return (dest);
}
