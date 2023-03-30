#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings
 *
 * @src: source of strings
 * @dest: destination of string
 * @n: int check
 *
 * Return: always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
