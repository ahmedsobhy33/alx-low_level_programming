#include <stdio.h>
#include "lists.h"

/**
 * list_len - function with one argument
 *
 * @h: const list_t pointer argument to struct
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
