#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at
 * the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");
	size_t txt_len = strlen(text_content);
	size_t bytes_wrtn = fwrite(text_content, 1, txt_len, file);

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}

	if (file == NULL)
	{
		return (-1);
	}

	if (bytes_wrtn != txt_len)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);
	return (1);
}
