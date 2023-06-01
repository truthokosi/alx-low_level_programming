#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  *add_node_end - to add a new node to the end of a linked list
  *@head: a pointer pointing to the list_t list
  *@str: the new string to be added to the new node
  *Return: address of the new element, else NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	s = malloc(sizeof(list_t));
	if (!s)
		return (NULL);

	s->str = strdup(str);
	s->len = len;
	s->next = NULL;

	if (*head == NULL)
	{
		*head = s;
		return (s);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = s;

	return (s);
}
