#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *main - to prit the result of simple operations
  *@argc: argument count
  *@argv: argument vector
  *Return: Always 0 for success
  */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int val1, val2;
char *t;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

val1 = atoi(argv[1]);
t = argv[2];
val2 = atoi(argv[3]);

if (get_op_func(t) == NULL || t[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*t == '/' && val2 == 0) ||
(*t == '%' && val2 == 0))
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(t)(val1, val2));

return (0);
}
