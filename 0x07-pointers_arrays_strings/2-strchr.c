#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: first value
 * @c: second value
 *
 * Return: Always to 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)

	{

		if (s[i] == c)
			return (&s[1]);
	}
	return (0);
}
