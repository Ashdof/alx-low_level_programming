#include <stdlib.h>
#include "main.h"

int word_end(char *str);
int word_count(char *);

/**
 * word_end - locate end of first wors
 * @str: a pointer to the string
 *
 * description: this function gets the index at which the first
 * word ends
 *
 * Return: The index value
 */
int word_end(char *str)
{
	int i = 0;

	while (str[i] != ' ')
		i++;

	return (i);
}

/**
 * word_count - count number of words
 * @str: a pointer to the string
 *
 * description: this function computes for the number of words in
 * a string
 *
 * Return: The number of words
 */

int word_count(char *str)
{
	int words = 0, state = 0;
	char *p = str;

	while (*p)
	{
		if (*p == ' ')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			++words;
		}
		p++;
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: a pointer to the string
 *
 * description: this function splits a string into individual words
 *
 * Return: a pointer to the array of split words or NULL if it fails
 */

char **strtow(char *str)
{
	char **mem;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	mem = malloc(sizeof(char *) * words + 1);
	if (mem == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_end(str + index);

		mem[w] = malloc(sizeof(char) * letters);

		if (mem[w] == NULL)
		{
			for (; w >= 0; w--)
				free(mem[w]);

			free(mem);

			return (NULL);
		}

		for (l = 0; l < letters; l++)
			mem[w][l] = str[index++];
		mem[w][l] = '\0';
	}
	mem[w] = NULL;

	return (mem);
}
