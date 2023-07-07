#include "main.h"

/**
 * get_endianness - function checks the endianness
 *
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *c;

	c = (unsigned char *)&i;

	return (*c);
}
