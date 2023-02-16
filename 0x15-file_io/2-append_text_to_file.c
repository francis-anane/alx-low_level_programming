/*
 * Author: Francis Ofori Anane
 * Date: 13/02/2023
 */

#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: The name of the file
 * @text_content: The text to append
 *
 * Return: 1 on success or -1 on error.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (access(filename, R_OK | W_OK) < 0)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	while (*text_content)
	{
		write(fd, text_content, 1);
		text_content++;
	}

	close(fd);
	return (1);
}
