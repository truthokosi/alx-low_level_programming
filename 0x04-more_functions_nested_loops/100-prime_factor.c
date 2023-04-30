#include <stdio.h>
/**
  *main - to print the largest prime factor of 612852475143
  *Return: Always 0 for success
  */

int main(void)
{
unsigned long int i, n = 612852475143;
for (i = 3; i < 782849; i = i + 2)
{
while ((n % i == 0) && (n != i))
n = n / i;
}
printf("%lu\n", n);
return (0);
}
