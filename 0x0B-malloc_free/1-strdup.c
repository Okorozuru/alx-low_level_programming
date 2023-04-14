#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new space in memory.
 * @str: string.
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int x, u;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	strout = (char *)malloc(sizeof(char) * (x + 1));

	if (strout == NULL)
		return (NULL);

	for (u = 0; u <= x; u++)
		strout[u] = str[u];

	return (strout);
}
