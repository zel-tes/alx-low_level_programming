#include <stdlib.h>

/**
 * create_array - create array of char.
 * @size: the size of the char array
 * @c: constant char
 *
 * Return: char pointer.
 **/
char *create_array(unsigned int size, char c)
{
        unsigned int i;
        char *str;

        if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
        if (str == NULL)
        {
                return NULL;
        }
        for ( i = 0; i < size; i++)
        {
                str[i] = c;
        }
        return str;
        free(str);
}
