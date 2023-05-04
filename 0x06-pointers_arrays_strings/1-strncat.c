#include "main.h"
/**
  *_strncat - concatenates two strings using at most n bytes
  *@dest: destination string pointer
  *@src: source string pointer
  *@n: number of bytes to be concatenated
  *Return: pointer to destination string
  */

char *_strncat(char *dest, char *src, int n)
{
int string_length, t;

string_length = 0;
while (dest[string_length] != '\0')
{
string_length++;
}
for (t = 0; t < n && src[t] != '\0'; t++, string_length++)
{
dest[string_length] = src[t];
}
dest[string_length] = '\0';
return (dest);
}
