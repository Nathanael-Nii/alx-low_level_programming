#include "main.h"

/**
 * print_triangle - efunction prints a triangle
 *
 *@size: size of the triangle
 * Return: always 0
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;


	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (c = size - row; c >= 1; c--)
			{
				_putchar(' ');
			}
			for (b = 1; b <= row; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
