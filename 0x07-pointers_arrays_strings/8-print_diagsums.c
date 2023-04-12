#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints sums
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int n, sum1 = 0, sum2 = 0;

	for (n = 0; n < size; n++)
	{
		sum1 += *(a + (size * n + n));
		sum2 += *(a + (size * n + size - 1 - n));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
