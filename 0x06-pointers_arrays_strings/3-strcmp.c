#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: if s1 is > s2 - return positive int
 * if s1 == s2 - return 0
 * else return negative int
 */
int _strcmp(char *s1, char *s2)
{
	int flag, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			flag = 15;
		}
		else if (s1[i] == s2[i])
		{
			flag = 0;
		}
		else
			flag = -15;
	}
	return (flag);
}
