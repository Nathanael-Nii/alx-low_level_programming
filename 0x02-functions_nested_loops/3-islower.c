#include "main.h"

/**
 * _islower - function that prints lower case
 *
 * @c: parameter to print
 * Return: 1 if c is lowercase and otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
