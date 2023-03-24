#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of times of character
 *
 * Return: always 0
 */


void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
