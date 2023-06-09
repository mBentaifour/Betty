#include "main.h"

 /**
  * last_index - returns the last index of a string
  * @s: pointer to string
  * Return: int
  */
int last_index(char *s);
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
 /**
  * _is_palindrome - check if a string is a palindrome
  * @s: string to check
  * Return: 0 or 1
  */

int is_palindrome(char *s);
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

 /**
  * _check - checker for palindrome
  * @s: string to evaluate
  * @go: int moves from rignt to left
  * @end: int moves from left to right
  * @mod: int
  * Return: 0 or 1
  */

int check(char *s, int go, int end, int mod);
{
	if ((go == end && mod != 0) || (go == end + 1 && mod == 0))
		return (1);
	else if (s[go] != s[end])
		return (0);
	else
		return (check(s, go + 1, end - 1, mod));
}
