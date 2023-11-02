#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - adds strings
 * @s1: string 1
 * @s2: str 2
 * @n: no of chars
 *
 * Return: pointer
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int a1, a2, i;

	a1 = strlen(s1);
	a2 = strlen(s2);

	if (s1 == NULL && s2 == NULL)
		s3 = (NULL);
	if (n >= a2)
	{
		s3 = malloc((a1 + a2 + 1) * sizeof(char));
		if (s3 == NULL)
			return (NULL);
		for (i = 0; i < a1; i++)
			s3[i] = s1[i];
		for (i = 0; i <= a2; i++)
		{
			s3[a1 + i] = s2[i];
			s3[a1 + a2] = '\0';
		}
	}
	if (n < a2)
	{
		s3 = malloc((a1 + n + 1) * sizeof(char));
		if (s3 == NULL)
			return (NULL);
		for (i = 0; i < a1; i++)
			s3[i] = s1[i];
		for (i = 0; i <= n; i++)
		{
			s3[a1 + i] = s2[i];
			s3[a1 + n] = '\0';
		}
	}
	return (s3);
	free(s3);
}
