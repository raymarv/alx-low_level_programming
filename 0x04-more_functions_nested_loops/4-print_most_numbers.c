#include "main.h"
/**
 * print_most_numbers -> this prints most numbers
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
	}
	_putchar('\n');
}
