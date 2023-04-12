#include "main.h"
/**
 * _memcpy - function that copies bytes from the memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: bytes number
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{	int g = 0;
	int i = n;

	for (; g < i; g++)
	{
		dest[g] = src[g];
		n--;
	}
return (dest);
}
