#include "main.h"
/**
  *rev_string - reverse array string
  *@n: integer
  *Return: 0
  */

void rev_string(char *n)
{
int s = 0;
int t = 0;
char truth;

while (*(n + s) != '\0')
{
s++;
}
s--;

for (t = 0; t < s; t++, t--)
{
truth = *(n + t);
*(n + t) = *(n + s);
*(n + s) = truth;
}
}

/**
  *infinite_add - adds two numbers
  *@n1: first number
  *@n2: second number
  *@r: buffer to use in storing the result
  *@size_r: buffer size
  *Return: pointer to 0 if result cannot be stored in r
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0, s = 0, t = 0, digits = 0;
int val1 = 0, val2 = 0, truth_tot = 0;

while (*(n1 + s) != '\0')
s++;
while (*(n2 + t) != '\0')
t++;
s--;
t--;

if (t >= size_r || s >= size_r)
return (0);
while (t >= 0 || s >= 0 || overflow == 1)
{
if (s < 0)
val1 = 0;
else
val1 = *(n1 + s) -'0';
if (t < 0)
val2 = 0;
else
val2 = *(n2 + t) -'0';
truth_tot = val1 + val2 + overflow;
if (truth_tot >= 10)
overflow = 1;
else
overflow = 0;
if (digits >= (size_r - 1))
return (0);
*(r + digits) = (truth_tot % 10) + '0';
digits++;
t--;
s--;
}
if (digits == size_r)
return (0);
*(r + digits) = '\0';
rev_string(r);
return (r);
}
