#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be printed.
 *
 * Return: none.
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1UL << 63; i > 0; i = i >> 1)
	{
		if (i & n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
