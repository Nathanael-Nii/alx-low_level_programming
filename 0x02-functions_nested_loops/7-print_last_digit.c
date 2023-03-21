#include "main.h"
/**
 * print_last_digit - function prints last digits
 *
 * @a: checks parameter
 *
 * Return: b
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 10)
		b = -b;
	_putchar(b + '0');
	return (b);
}
