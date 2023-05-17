#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  *@argc: argument count
  *@argv: argument vector
  *Return: if the numberof arguments is negative print 0
  */

int main(int argc, char *argv[])
{
int c1, c2 = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

c1 = atoi(argv[1]);

while (c1 > 0)
{
c2++;
if ((c1 - 25) >= 0)
{
c1 -= 25;
continue;
}
if ((c1 - 10) >= 0)
{
c1 -= 10;
continue;
}
if ((c1 - 5) >= 0)
{
c1 -= 5;
continue;
}
if ((c1 - 2) >= 0)
{
c1 -= 2;
continue;
}
c1--;
}
printf("%d\n", c2);

return (0);
}
