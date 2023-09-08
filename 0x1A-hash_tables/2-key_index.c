#include "hash_tables.h"

/**
 * key_index -function goves the index of a key
 *
 * @key: key to be hashed
 * @size: size of the array of the hash table
 *
 * Return: the index of the value/key pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* calc the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Determine the index where the kwy should be stored */
	return (hash_value % size);
}
