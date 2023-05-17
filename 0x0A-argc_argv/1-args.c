#include "main.h"
#include <stdio.h>
/**
  *main - entry point to print the number of arguments
  * passed into a program
  *@argc: argument count
  *@argv: argument vector
  *Return: Always 0 for success
  */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
