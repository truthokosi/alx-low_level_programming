#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  *add_node - to add a new node at the beginning of a list_t list
  *@head: a pointer pointing to the list
  *@str: new string to be duplicated
  *Return: the address of the new element, else NULL
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	unsigned int len = 0;

	while (str[len])
		len++;

	s = malloc(sizeof(list_t));
	if (!s)
		return (NULL);

	s->str = strdup(str);
	s->len = len;
	s->next = (*head);
	(*head) = s;

	return (*head);
}
