#include "main.h"
#include <stdio.h>

/**
 * _memset - function fills memory with constant byte
 *
 * @n: bytes of the memory area pointed to by s
 * @s: points to byte b
 * @b: memory area pointer
 *
 * Return: nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
