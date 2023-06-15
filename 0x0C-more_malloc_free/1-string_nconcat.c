#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * If the function fails, it should return NULL
 * n is greater or equal to the length 
 * of s2 then use the entire string s2
 *
 * @s1: first pointer to string.
 * @s2: second pointer to string.
 * @n: Number of bytes from n2 concatenate.
 *
 * Return: pointer to space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_length, s2_length;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

}
