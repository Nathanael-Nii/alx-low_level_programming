#include "main.h"

/**
 * _isupper - check uppercase characters
 *
 * @c: check parameters
 *
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
