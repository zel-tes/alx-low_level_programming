#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * print_funct - print before main
 *
 *
 * Return: Nothing.
 **/
void print_funct(void)
{
	list_t  *head, *tail;
	char *s1 = "you\'re beat! and yet, you must allow,\n"
		"I bore my house upon my back!";

	head = malloc(sizeof(list_t));
	head->str = strdup(s1);
	tail = head;
	tail = tail->next;
	while (head != NULL)
	{
		printf("%s", head->str);
		head = head->next;
	}
	printf("\n");
}
