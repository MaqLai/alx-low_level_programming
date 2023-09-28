#include <stdio.h>
#include "main.h"

/**
 * flip_bits - calculates the number of bits you would need to flip
 * to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits that need to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int add = 0;
	unsigned long int result = n ^ m;

	while (result != 0)
	{
		add += result & 1;
		result >>= 1;
	}
	return (add);
}
