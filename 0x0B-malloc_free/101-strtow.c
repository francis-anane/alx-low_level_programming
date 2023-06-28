#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

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
 * _strncpy - copies a string
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int s_len = _strlen(src);

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = s_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}


/**
 * is_whitespace - Checks if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if the character is a whitespace, 0 otherwise.
 */
int is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * word_count - Counts the number of words in a string buffer.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;

	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		if (is_whitespace(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}

		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int in_word = 0, word_index = 0, word_start = 0, count, i, j;
	char **words;
	int str_len = _strlen(str), word_length;

	if (str == NULL || (str_len == 1 && *str == ' '))
		return (NULL);
	count = word_count(str);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	/* Extract each word from the input string */
	for (i = 0; i <= str_len; i++)
	{
		if (is_whitespace(str[i]) || str[i] == '\0')
		{
			if (in_word)
			{
				in_word = 0;
				word_length = i - word_start;
				words[word_index] = malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
						free(words[j]);
					free(words);
					return (NULL);
				}
				_strncpy(words[word_index], str + word_start, word_length);
				words[word_index][word_length] = '\0';
				word_index++;
			}
		}
		else if (!in_word)
		{
			in_word = 1;
			word_start = i;
		}
	}
	words[count] = NULL;
	return (words);
}
