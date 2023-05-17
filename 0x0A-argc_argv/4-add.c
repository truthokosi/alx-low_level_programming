#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *main - entry point to print the sum of int arguments
  *@argc: argument count
  *@argv: argument vector
  *Return: Always 0 for success
  */

int main(int argc, char *argv[])
{
int t;
unsigned int i, sum;
char *a;

if (argc > 1)
{
for (t = 1; t < argc; t++)
{
a = argv[t];

for (i = 0; i < strlen(a); i++)
{
if (a[i] < 48 || a[i] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(a);
a++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
