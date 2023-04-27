#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function with two arguments
 *
 * @head: double pointer to linked list
 * @str: string pointer
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = _strdup(str);
	while (str[i] != '\0')
		i++;
	tmp->len = i;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

/**
 * *_strdup - function with one argument
 *
 * @str: string argument
 *
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
