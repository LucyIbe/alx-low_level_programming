#include "hash_tables.h"

/**
 *  * key_index - gives the index of a key
 *   * @key: the key
 *    * @size: the size of the array
 *     * Return: the key index
 *      */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		int index;

		index = hash_djb2(key) % size;
		return (index);
}
