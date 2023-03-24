#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function adds two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtraction of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiplies two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication of two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function division of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function calculates modulo of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: modulo of two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
