#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of the bit at the given
 * index to 1.
 * @n: the pointer to the unsigned long integer to modify.
 * @index: the index of the bit to set, starting from 0.
 *
 * Return: 1 if the bit was successful, or -1 if
 * an error occures.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= mask;

	return (1);
}
