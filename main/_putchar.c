#include <unistd.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to write
 *
 * Return: The size of the character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
