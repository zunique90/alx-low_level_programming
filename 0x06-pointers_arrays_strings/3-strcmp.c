#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int flag, i;

	flag = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] - s2[i] != 0)
		{
			flag = s1[i] - s2[i];
			break;
		}
	}
	if (flag == 0 && s1[i] == '\0')
		flag = s1[i] - s2[i];

	return (flag);
}
