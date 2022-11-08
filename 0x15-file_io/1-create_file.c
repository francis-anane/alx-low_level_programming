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
	int fd, size, f_exst;

	size = strlen(text_content);

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		size = strlen(text_content);
	f_exst = open(filename, O_RDONLY);
	fd = open(filename, O_CREAT | O_RDWR);
	if (fd < 0)
		return (-1);

	if (f_exst < 0)
	{
		fchmod(fd, 0600);
		close(f_exst);
	}

	/*write text to fd*/
	if(text_content != NULL)
		write(fd, text_content, size);
	close(fd);
	return (1);
}
