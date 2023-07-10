#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - dublicate to new memory space location
 * @str: string to dublicate
 *
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	char *s;
	int i = 1;
	int a = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';

	return (s);
}
