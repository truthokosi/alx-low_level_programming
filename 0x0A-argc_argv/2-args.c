 #include "main.h"
 #include <stdio.h>
/**
  *main - entry point to print the arguments passed into a program
  *@argc: argument count
  *@argv: argument vector
  *Return: Always 0 for success
  */

int main(int argc, char *argv[])
{
int i = 0;

(void) argc;

for (i = 0; i < argc; i++)

printf("%s\n", argv[i]);

return (0);
}
