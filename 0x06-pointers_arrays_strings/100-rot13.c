#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	int i = 0;
	int j;
	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXUZABCDEFGHIJKLM";

	while (s[i])
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
