#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatnate strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer
 **/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i;
	int a1 = strlen(s1);
	int a2 = strlen(s2);

	if (s1 == NULL || s2 ==  NULL)
	{
		s3 = (char *)malloc((a2 + 1) * (sizeof(char)));
		if (s3 == NULL)
			return (NULL);
		for (i = 0; i < a2; i++)
		{
			s3[i] = s2[i];
			s3[a2] = '\0';
		}
		s3 = (char *)malloc((a1 + 1) * (sizeof(char)));
		if (s3 == NULL)
			return (NULL);
		for (i = 0; i < a1; i++)
		{
			s3[i] = s1[i];
			s3[a1] = '\0';
		}
	}
	if (s1 == NULL && s2 == NULL)
		s3 = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		s3 = (char *)malloc((a1 + a2 + 1) * (sizeof(char)));
		if (s3 == NULL)
			return (NULL);
		for (i = 0; i <= a1; i++)
			s3[i] = s1[i];
		for (i = 0; i < a2; i++)
		{
			s3[a1 + i] = s2[i];
			s3[a1 + a2] = '\0';
		}
	}
	return (s3);
}
