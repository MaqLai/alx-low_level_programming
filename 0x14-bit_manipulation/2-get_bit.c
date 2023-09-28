#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of the bit at the given index.
 * @n: the unsigned long integer to extract the bit from.
 * @index: the index of the bit to get, starting from 0.
 *
 * Return: the value of the bit at the given
 * index, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n & mask) != 0);
}
