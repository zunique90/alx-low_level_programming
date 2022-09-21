#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: s
 */
char *leet(char *s)
{
	int i;
	int j;
	char str1[] = "aAEeoOtTLl";
	char str2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == str1[j])
				s[i] = str2[j];
		}
	}
	return (s);
}
