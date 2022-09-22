#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	int j;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRiTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = s

	while (*s)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*s == str1[j])
			{
				*s = str2[j];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
