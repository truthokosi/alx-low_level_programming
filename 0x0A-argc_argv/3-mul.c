#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry point for a program that multiples two numbers
  *@argc: arguments count
  *@argv: argument vector
  *Return: Always 0 for success
  */

int main(int argc, char *argv[])
{
int i = 0, j = 0;
int mul;

if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
mul = i *j;

printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
