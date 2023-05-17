#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
  *word_len - to lacate the index of the
  * end of the first word in a string
  *@str: the string
  *Return: the index from the function
  */

int word_len(char *str)
{
int i = 0, t = 0;
while (*(str + i) && *(str + i) != ' ')
{
t++;
i++;
}
return (i);
}

/**
  *count_words - to count the words in a string
  *@str: the string to be counted
  *Return: the number of words in the strig
  */

int count_words(char *str)
{
int a = 0, b = 0, c = 0;

for (a = 0; *(str + a); a++)
c++;
for (a = 0; a < c; a++)
{
if (*(str + a) != ' ')
{
b++;
a += word_len(str + a);
}
}
return (b);
}

/**
  *strtow - to split a string into words
  *@str: string in question
  *Return: pointer to an array of string else NULL
  */

char **strtow(char *str)
{
int a = 0, b, c, d, e;
char **t;

if (str == NULL || str[0] == '\0')
return (NULL);

b = count_words(str);
if (b == 0)
return (NULL);

t = malloc(sizeof(char *) * (b + 1));
if (t == NULL)
return (NULL);

for (c = 0; c < b; c++)
{
while (str[a] == ' ')
a++;

d = word_len(str + a);
t[c] = malloc(sizeof(char) * (d + 1));

if (t[c] == NULL)
{
for (; c >= 0; c--)
free(t[c]);

free(t);
return (NULL);
}
for (e = 0; e < d; e++)
t[c][e] = str[a++];

t[c][e] = '\0';
}
t[c] = NULL;

return (t);
}
