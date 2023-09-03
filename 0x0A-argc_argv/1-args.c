#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command lines.
 * @argv: arrays that contain the prigram command line arguments.
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
