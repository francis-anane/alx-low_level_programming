/*
 * Author: Francis Ofori Anane
 * Date: 15/02/2023
 */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * main - Entry point.
 *
 * Description: Copy the content of a file to another file.
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 (success)
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, rd;
	char *buff;

	if (ac < 3 || ac > 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (access(av[1], F_OK | R_OK) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			av[1]);
		exit(98);
	}

	buff = malloc(1024);

	fd_from = open(av[1], O_RDONLY);
	rd = read(fd_from, buff, 1024);
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from
);
		exit(100);
	}
	if (access(av[2], F_OK) == 0)

		fd_to = open(av[2], O_WRONLY | O_TRUNC);
	else
		fd_to = creat(av[2], 00664);

	write(fd_to, buff, rd);

	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
