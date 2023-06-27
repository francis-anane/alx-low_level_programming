#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert
 * Return: The converted value or 0 on error.
 */
int _atoi(char *s)
{
	unsigned int counter = 0, size = 0, j = 0, k = 1, m = 1, i;

	while (s[counter] != '\0')
	{
		if (size > 0 && (s[counter] < '0' || s[counter] > '9'))
			break;

		if (s[counter] == '-')
			k *= -1;

		if (s[counter] >= '0' && s[counter] <= '9')
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		counter++;
	}

	for (i = counter - size; i < counter; i++)
	{
		j = j + ((s[i] - 48) * m);
		m /= 10;
	}
	return (j * k);
}
