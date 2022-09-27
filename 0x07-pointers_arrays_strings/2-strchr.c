/*
 * Author: Francis Ofori Anane
 * Date: 27/09/2022
 */

#include "main.h"

/**
  * _memcpy - Copies  @n bytes from memory area @src to memory area @dest.
  * @dest: The memory area to be copied to.
  * @src: The memory area to be copied from.
  * @n: The number of bytes to be copied.
  * Return: A poiter to @dest
  */

char *_strchr(char *s, char c)
{	
	char *b;
	char *null = '\0';
	int i = 0;


	while(s[i] != '\0')
	{	
		if (s[i] == c)
		{
			b = &s[i];
			return (b);
		}
		else
			return (null);
		i++;
	}

	return (b);

}
