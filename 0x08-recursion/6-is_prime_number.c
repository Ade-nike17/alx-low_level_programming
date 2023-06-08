#include "main.h"
#include <math.h>

/**
 * prime_helper - function checks if n is divisible by its sqrt
 *
 * @n: number to be checked for divisibility
 * @divisor: number to divide n by
 *
 * Return: 1 if prime or 0 if not prime
 */


int prime_helper(int n, int divisor)
{
	if (n < 2)
		return (0);
	if (divisor > sqrt(n))
		return (1);
	if (n % divisor == 0)
		return (0);
	return (prime_helper(n, divisor + 1));
}



/**
 * is_prime_number - function checks if n is a prime
 *
 * @n: number to be checked
 * Return: value of prime helper
 */

int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
