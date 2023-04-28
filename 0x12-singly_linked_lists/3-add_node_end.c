#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function with two arguments
 *
 * @head: pointer to struct of linked list
 * @str: char type pointer to string
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *end_node, *cursor;

	end_node = malloc(sizeof(size_t));
	if (end_node == NULL)
		return (NULL);
	if (str)
	{
		end_node->str = _strdup(str);
		while (str[i] != '\0')
			i++;
		end_node->len = i;
	}
	else
	{
		end_node->str = NULL;
		end_node->len = 0;
	}
	end_node->next = NULL;
	if (*head)
	{
		cursor = *head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = end_node;
	}
	else
		*head = end_node;
	return (end_node);
}

/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *_strdup(const char *str)
{
	int a, b;
	char *ptr;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (*(str + a) != '\0')
	{
		a++;
	}

	ptr = malloc(sizeof(char) * a + 1);

	if (ptr == NULL)
		return (NULL);

	b = 0;
	while (str[b] != '\0')
	{
		ptr[b] = str[b];
		b++;
	}
	ptr[b] = '\0';
	return (ptr);
}
