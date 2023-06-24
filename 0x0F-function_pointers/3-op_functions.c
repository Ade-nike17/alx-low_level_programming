#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function adds two integers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: add
 */

int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}


/**
 * op_sub - function finds the diff of two integers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: sub
 */

int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}


/**
 * op_mul - function multiplies two integers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: mul
 */

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}


/**
 * op_div - function divides two integers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: div
 */

int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}


/**
 * op_mod - function finds the modulo of two integers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
