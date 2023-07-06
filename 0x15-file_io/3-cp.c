/*
 * Author: Francis Ofori Anane
 * Date: 15/02/2023
 */

#include "main.h"
/**
 * access_err - checks if files can be opened.
 * @fd_from: The file_from.
 * @fd_to: file_to.
 * @av: argument vector.
 */

void access_err(int fd_from, int fd_to, char *av[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - Entry point.
 *
 * Description: Copy the content of a file to another file.
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 (success)
 */

int main(int ac, char *av[])
{
	int fd_from, fd_to;
	ssize_t rbytes, wbytes;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	access_err(fd_from, fd_to, av);

	rbytes = 1024;
	while (rbytes == 1024)
	{
		rbytes = read(fd_from, buff, 1024);
		if (rbytes == -1)
			access_err(-1, 0, av);
		wbytes = write(fd_to, buff, rbytes);
		if (wbytes == -1)
			access_err(0, -1, av);
	}

	if ((close(fd_from)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if ((close(fd_to)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
