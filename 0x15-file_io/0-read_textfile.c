#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a file and prints it to the
 * POSIX standard output.
 * @filename: name of the file to read.
 * @letters: number of letters it should read and print.
 *
 * Return: actual number of letters it should read and
 * print, 0 otherwise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char buff[1024];
	ssize_t total_rd = 0;
	size_t rd_size = (letters < sizeof(buff)) ? letters : sizeof(buff);
	size_t bytes_rd = fread(buff, 1, rd_size, file);
	ssize_t bytes_wrtn = write(STDOUT_FILENO, buff, bytes_rd);

	if (filename == NULL)
	{
		return (0);
	}

	if (file == NULL)
	{
		return (0);
	}

	while (letters > 0)
	{
		if (bytes_rd == 0)
		{
			if (feof(file))
			{
				break;
			}
			else
			{
				fclose(file);
				return (0);
			}
		}

		if (bytes_wrtn < 0 || (size_t)bytes_wrtn != bytes_rd)
		{
			fclose(file);
			return (0);
		}

		total_rd += bytes_rd;
		letters -= bytes_rd;
	}

	fclose(file);
	return (total_rd);
}
