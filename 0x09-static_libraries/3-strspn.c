#include "main.h"

/**
 * _strspn - Entry point
 * @s: input value
 * @accept: input value
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
int x = 0, i = 0;
	unsigned int u = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
				u++;
			x++;
		}
		i++;
		x = 0;
	}
	return (u);
}
