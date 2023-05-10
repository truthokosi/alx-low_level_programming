#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - funtion to return
 *the natural square root of a number
 * @n: number to find it's sqaure root
 * Return: the result of the square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - a recursive function to find the natural
 * square root of a number
 * @n: number to find it's square root
 * @it: an iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int it)
{
if (it * it > n)
return (-1);
if (it * it == n)
return (it);
return (actual_sqrt_recursion(n, it + 1));
}

