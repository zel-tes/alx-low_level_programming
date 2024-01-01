#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile -check the code
 * @filename: pointer of file
 * @letters: numbers of chars
 *
 * Return: number of chars
 **/
size_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *fptr;
	size_t length;

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	fptr = malloc(letters * sizeof(char *));
	if (fptr == NULL)
		return (0);
	if (fgets(fptr, letters, file) == NULL)
		return (0);
	while (fgets(fptr, letters, file) != NULL)
	{
		length = strlen(fptr);
		write(1, fptr, length);
	}
	free(fptr);
	fclose(file);
	return (letters);
}
