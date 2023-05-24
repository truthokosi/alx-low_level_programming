#include <stdio.h>
#include <stdlib.h>
/**
  *main - to print opcodes of a main function
  *@argc: argument count
  *@argv: argument vector
  *Return: Always 0 for success
  */

int main(int argc, char *argv[])
{
int b, i;
int (*a)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

b = atoi(argv[1]);

if (b < 0)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < b; i++)
{
opcode = *(unsigned char *)a;
printf("%.2x", opcode);

if (i == b - 1)
continue;
printf(" ");

a++;
}

printf("\n");

return (0);
}
