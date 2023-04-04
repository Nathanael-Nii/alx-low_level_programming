#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: number of byte in initial segment
 * @accept: parameter
 *
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b;
	int c;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] != 32)
		{
			for (c = 0; accept[c] != '\0'; c++)
			{
				if (s[b] == accept[c])
					c++;
			}
		}
		else
			return (a);
	}
	return (a);

}
