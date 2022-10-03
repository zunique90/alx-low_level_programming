#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * Return: on succes, returns a pointer to a newly allocated memory space
 * which contains the contents of s1 and s2
 * on failure - NULL
 */
char *str_concat(char *s1, char *s2)
{
	int l1 = 0;
	int l2 = 0;
	int l3 = 0;
	int i;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l1++;

	for (i = 0; s2[i]; i++)
		l2++;

	s3 = malloc((l1 + l2) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[l3++] = s1[i];

	for (i = 0; s2[i]; i++)
		s3[l3++] = s2[i];

	return (s3);
}
