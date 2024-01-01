#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * create_file - check the code
 * @filename: file pointer
 * @text_content: text to be write
 *
 * Return: 1
 **/
int create_file(const char *filename, char *text_content)
{
	FILE *file;
	char *fptr;
	size_t len;

	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);
	len = strlen(text_content);
	fptr = malloc(len * sizeof(char *));
	if (fptr == NULL)
		return (-1);
	if (len > 0)
	{
		fputs(fptr, file);
		fputs("\n", file);
	}
	return (1);
}
