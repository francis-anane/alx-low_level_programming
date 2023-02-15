/*
 * Author: Francis Ofori Anane
 * Date: 7/11/2022
 */

#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and
 * print it to the POSIX standard output.
 *
 * @filename: A pointer to the file path.
 * @letters: The number of
 * charactes to read and print.
 * Return: Number of characters read on success, or 0, if the file could not be
 * open or read, if filename is NULL or
 * if write fails and could not write
 * the expected bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t rbytes;
	size_t wbytes;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (-1);
	rbytes = read(fd, buff, letters);

	/*write text to POSIX standard output*/
	wbytes = write(STDOUT_FILENO, buff, rbytes);

	if (rbytes != wbytes)
		return (0);

	close(fd);
	free(buff);
	return (wbytes);
}
