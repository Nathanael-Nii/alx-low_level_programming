#include "main.h"

/**
 * print_line - function draws straight line in terminal
 *
 * @n: number of times of character
 *
 * Return:always 0
 */


void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
