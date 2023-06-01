#include "lists.h"
#include <stdlib.h>
/**
  *free_list - to free a linked list
  *@head: ointer to the list to be freed
  */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
