#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  *op_add - to sum two numbers
  *@a: first number
  *@b: second number
  *Return: the resulting sum
  */

int op_add(int a, int b)
{
return (a + b);
}


/**
  *op_sub - to find the difference between two digits
  *@a: first digit
  *@b:second digit
  *Return: theresult of the subtraction
  */

int op_sub(int a, int b)
{
return (a - b);
}

/**
  *op_mul - to multiply two digits
  *@a: the first digit
  *@b: second digit
  *Return: the result of the multiplication
  */

int op_mul(int a, int b)
{
return (a * b);
}


/**
  *op_div - to divide a number by another
  *@a: the first number
  *@b: the second number
  *Return: the result of the division
  */

int op_div(int a, int b)
{
return (a / b);
}


/**
  *op_mod - to find the remainder from dividing two numbers
  *@a: the first number
  *@b: second number
  *Return: the remainder after division
  */

int op_mod(int a, int b)
{
return (a % b);
}
