#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be returned
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l = l + _strlen_recursion(s + 1);
	}

	return (l);
}
/**
 * chk_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * @i: integer
 * @j: integer
 * Return: 0
 */
int chk_palindrome(int i, int j, char *s)
{

	if (i >= j)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	else
		return (chk_palindrome(i + 1, j - 1, s));
}
/**
 * is_palindrome - Entry Point
 * @s: string to be checked
 *
 * Return: 1 if a string is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int j = 0;

	j = _strlen_recursion(s) - 1;
	return (chk_palindrome(0, j, s));
}
