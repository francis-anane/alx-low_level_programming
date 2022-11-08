/*
 * Author: Francis Ofori Anane
 * Date: 7/11/2022
 */

#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - Creates a file.
 *
 * @filename: The name of the file to be created.
 * @text_content: The text to write into the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fexist;
	int size;

	size = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fexist = open(filename, O_RDONLY);
	/*open file for writing*/

	if (fexist >= 0)
	{
		fd = open(filename, O_RDWR | O_APPEND);
		close(fexist);
	}

	else
	{
		fd = open(filename, 0600, O_CREAT | O_RDWR);

		close(fexist);
	}

	if (fd == -1)
		return (-1);

	/*write text to fd*/
	write(fd, text_content, size);

	close(fd);
	return (1);
}
