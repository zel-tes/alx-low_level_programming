#include "main.h"

/**
 * is_palindrome - check the code
 * @s: string
 *
 * Return: Always 1
 **/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	if (*(s) == *(s + _strlen_recursion(s) - 1))
		return (is_palindrome(s - 1));
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
