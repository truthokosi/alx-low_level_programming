#include "main.h"
/**
  *leet - function that ecodes a string into 1337
  * a and A relpaced with 4
  * e and E replaced with 3
  * o and O replaced with 0
  * t and T replaced with 7
  * l and L replaced with 1
  *@t: pointer to string
  *Return: pointer to t
  */

char *leet(char *t)
{
int string, count;
char letters[] = "aAeEoOtTlL";
char nums[] = "4433007711";
/* scanning through string */
string = 0;

while (t[string] != '\0')
/* check if letter is found */
{
count = 0;

while (count < 10)
{
if (letters[count] == t[string])
{
t[string] = nums[count];
}
count++;
}
string++;
}
return (t);
}

