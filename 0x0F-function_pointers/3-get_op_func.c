#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the right func to perform
 * the given operation
 *
 * @s: the operator passed as an arg to the program
 *
 * Return: ptr to the finction that corresponds to
 * the operator and NULL if operator does not match
 * corresponding function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while ((ops[i].op) != NULL)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
