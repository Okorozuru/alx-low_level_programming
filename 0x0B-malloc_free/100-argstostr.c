#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int d, x, y, z;

	if (ac == 0)
	{
		return (NULL);
	}
	for (d = x = 0; x < ac; x++)
	{
		if (av[x] == NULL)
			return (NULL);

		for (y = 0; av[x][y] != '\0'; y++)
			d++;
		d++;
	}

	aout = malloc((d + 1) * sizeof(char));
	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (x = y = z = 0; z < d; y++, z++)
	{
		if (av[x][y] == '\0')
		{
			aout[z] = '\n';
			x++;
			z++;
			y = 0;
		}
		if (z < d - 1)
			aout[z] = av[x][y];
	}
	aout[z] = '\0';

	return (aout);
}
