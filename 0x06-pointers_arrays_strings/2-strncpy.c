#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - function copies a string
 *
 * @src: source of strings
 * @dest: destination of the string
 * @n: int check
 *
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && *(src + a); a++)
	{
		*(dest + a) = *(src + a);
	}
	for (; a < n; a++)
	{
		*(dest + a) = '\0';
	}
	return (dest);

}
