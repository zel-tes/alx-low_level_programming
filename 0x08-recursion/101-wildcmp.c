#include "main.h"

/**
 * wildcmp - check the code
 * @s1: string
 * @s2: str
 *
 * Return: Always 1
 **/
int wildcmp(char *s1, char *s2)
{
	int n = _strlen_recursion(s1);
	int m = _strlen_recursion(s2);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (s1 == s2)
		return (1);
	if ((*s1 == *s2 || *s2 == '*') && (*(s1 + n - 1) == *(s2 + m - 1)))
		return (1);
	if ((*s1 == *s2 || *s2 == '*') &&  *(s2 + m - 1) == '*')
		return (1);
	return (0);
}

/**
 * _strlen_recursion - length
 * @s: string
 *
 * Return: Always length
 **/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
