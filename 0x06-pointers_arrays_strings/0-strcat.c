/*
 * Author: Francis Ofori Anane
 * Date: 21/09/2022
 */

#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest : first string.
 * @src : second string.
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
