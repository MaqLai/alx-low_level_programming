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
	int add = 0;

	for (i = 63; i < 64; i--)
	{
		add = n >> i;

		if (add & 1)
		{
			_putchar('1');
			add++;
		}
		else if (add)
		{
			_putchar('0');
		}
	}
	if (!add)
	{
		_putchar('0');
	}
}
