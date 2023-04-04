#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function copies memory area
 *
 * @n: byte copied from memory area
 * @src: memory area
 * @dest: final memory area
 *
 * Return: nothing
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

