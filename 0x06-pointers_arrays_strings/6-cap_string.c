#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @s: string to be modified
 *
 * Return: modified string
 */
char *cap_string(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == ' ' || s[j] == ';' || s[j] == '\n' || s[j] == '\t'
		    || s[j] == ',' || s[j] == '.' || s[j] == '!' || s[j] == '?'
		    || s[j] == '"' || s[j] == '(' || s[j] == ')' ||
		    s[j] == '{' || s[j] == '}')
			if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
			s[j + 1] = s[j + 1] - 32;
		j++;
	}
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	return (s);
}
