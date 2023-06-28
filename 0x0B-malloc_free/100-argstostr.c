#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: int (length of s)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - Copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: Pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0, i, position = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length required for the concatenated string */
	for (i = 0; i < ac; i++)
		total_length += _strlen(av[i]) + 1;  /* +1 for '\n' */

	result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		/* Copy each argument to the result string */
		_strcpy(result + position, av[i]);
		position += _strlen(av[i]);
		/* Add newline character after each argument */
		result[position++] = '\n';
	}

	/* Null-terminate the result string */
	result[total_length] = '\0';

	return (result);
}
