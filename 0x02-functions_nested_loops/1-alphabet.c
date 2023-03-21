#include "main.h"
/**
 * main - main function that prints alpahbet in lower case
 *
 * Return: always 0
 */

void print_alphabet(void);
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
