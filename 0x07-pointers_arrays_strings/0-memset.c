#include "main.h"

/**
 * _memset -this function  fills a chunk of memory with a certian value
 * @s:first memory address
 * @b:the chosen  value
 * @n:number of bytes to be changed
 *
 * Return: changed  array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
