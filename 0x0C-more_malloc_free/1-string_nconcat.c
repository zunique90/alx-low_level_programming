#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - conactenates 2 strings using
 * @s1: first string
 * @s2: second string
 * @n: max number of bytes of s2 to concatenate to s1
 * Return: if the function fails - NULL
 * else - a pointer to new space in memory containing the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int l = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	s3 = malloc(sizeof(char) * (l + 1));

	if (s3 == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		s3[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		s3[l++] = s2[i];

	s3[l] = '\0';

	return (s3);
}
