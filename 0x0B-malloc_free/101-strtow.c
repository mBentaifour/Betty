#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int count = 0;
	int i, len = strlen(str);
	int in_word = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != (' ') && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (str[i] == (' '))
		{
			in_word = 0;
		}
	}

	return (count);
}

/**
 * **strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words) or NULL if failure
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k, len, in_word;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	in_word = 0;
	j = 0;
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			in_word = 1;
			len++;
		}
		else if (str[i] == ' ' && in_word)
		{
			in_word = 0;
			words[j] = malloc((len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			strncpy(words[j], str + i - len, len);
			words[j][len] = '\0';
			len = 0;
			j++;
		}
		else if (str[i] != ' ' && in_word)
		{
			len++;
		}
	}

	if (in_word)
	{
		words[j] = malloc((len + 1) * sizeof(char));
	}
	{
	if (words[j] == NULL)
		{
			for (k = 0; k <= j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		strncpy(words[j], str + i - len, len);
		
		words[j][len] = '\0';
		j++;
	}
	
	words[j] = (NULL);
	return (words);
}
