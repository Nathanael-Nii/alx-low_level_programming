#include "main.h"

/**
 * _isdigit - function cehcks for digits
 *
 * @c: checks parameter
 *
 * Return: 1 if a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

