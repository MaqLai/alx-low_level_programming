#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: NULL terminate string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_form = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	ssize_t txt_len = strlen(text_content);
	ssize_t bytes_wrtn = write(file_form, text_content, txt_len);

	if (filename == NULL)
	{
		return (-1);
	}

	if (file_form == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		if (bytes_wrtn != txt_len)
		{
			close(file_form);
			return (-1);
		}
	}

	close(file_form);
	return (1);
}
