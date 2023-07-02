#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int len = strlen(str), i;

	hash = 5381;
	for (i = 0; i < len; ++i)
		hash = ((hash << 5) + hash) + str[i]; /* hash * 33 + str[i] */

	return (hash);
}
