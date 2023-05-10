#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if an integer is a prime number or not
 * @n: number to check
 * Return: 1 if n is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - uses the recursive approach to
 *check if a number is a prime number
 * @n: number to check
 * @it: iterator
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int it)
{
if (it == 1)
return (1);
if (n % it == 0 && it > 0)
return (0);
return (actual_prime(n, it - 1));
}

