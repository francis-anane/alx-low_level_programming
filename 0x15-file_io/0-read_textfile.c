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
	size_t bytes;
	char *buff;

	/*allocate memory for text buffer*/
	buff = malloc(letters);
	if (buff == NULL)
		return (-1);

	if (filename == NULL)
		return (0);

	/*open file for reading*/
	fd = open(filename, O_RDONLY);
	bytes = read(fd, buff, letters);

	/*write text to standard output*/
	bytes = write(STDOUT_FILENO, buff, letters);

	if (bytes != letters)
		return (0);

	close(fd);
	free(buff);
	return (letters);
}
